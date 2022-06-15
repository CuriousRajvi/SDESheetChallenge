#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
        };

*****************************************************************/

Node *addTwoNumbers(Node *head1, Node *head2)
{
    // Write your code here.
    Node *temp=new Node(1);
    Node *dummy=temp;
    int carry=0;
    while(head1!=NULL ||head2!=NULL || carry){
        int sum=0;
        if(head1!=NULL){
            sum+=head1->data;
            head1=head1->next;
        }
        if(head2!=NULL){
            sum+=head2->data;
            head2=head2->next;
        }
        sum+=carry;
        carry=sum/10;
        Node *NODE=new Node(sum%10);
        dummy->next=NODE;
        dummy=dummy->next;
    }
    return temp->next;
}
