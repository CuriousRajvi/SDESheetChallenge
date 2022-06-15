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

bool detectCycle(Node *head)
{
    //	Write your code here
    if(head==NULL) return false;
    Node* start=head;
    Node* end=head;
    while(end->next!=NULL && end->next->next!=NULL){
        end=end->next->next;
        start=start->next;
        if(start==end) return true;
    }
    return false;
    
}
