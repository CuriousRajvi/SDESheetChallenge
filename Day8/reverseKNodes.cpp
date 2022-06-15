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

Node *getListAfterReverseOperation(Node *head, int n, int b[]){
    // Write your code here.
    if(head==NULL|| head->next==NULL) return head;
    Node *h=head;
    int len=0;
    while(h!=NULL){
        len++;
        h=h->next;
    }
    Node *dummy;
    dummy->next=head;
    Node *pre=dummy;
    Node *cur=dummy;
    Node *nex=dummy;
    
    int j=0;
    
    while(len>0 && j<n){
        cur=pre->next;
        nex=cur->next;
        int x=(b[j]<=len)?b[j]:len;
        if(x==0){
            j++;
            continue;
        }
        for(int i=1;i<x;i++){
            cur->next=nex->next;
            nex->next=pre->next;
            pre->next=nex;
            nex=cur->next;
        }
        pre=cur;
        len-=b[j];
        j++;
    }
    return dummy->next;
}
