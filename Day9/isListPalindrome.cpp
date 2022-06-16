#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
    LinkedListNode<int>*start=head;
    LinkedListNode<int> *end=head;
    
    if(head==NULL || head->next==NULL)
        return true;
    
    //find middle node
    while(end->next!=NULL && end->next->next!=NULL){
        start=start->next;
        end=end->next->next;
    }
    
    LinkedListNode<int> *pre=NULL;
    LinkedListNode<int> *nex=NULL;
    
    //reversing linked list
    while(start->next!=NULL){
        nex=start->next->next;
        start->next->next=pre;
        pre=start->next;
        start->next=nex;
    }
    
    start->next=pre;
    start=start->next;
    
    //checking for palindrome or not
    while(start!=NULL){
        if(head->data!=start->data)
            return false;
        head=head->next;
        start=start->next;   
    }
    return true;
}
