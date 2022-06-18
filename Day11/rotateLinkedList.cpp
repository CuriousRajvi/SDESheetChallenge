#include <bits/stdc++.h> 
/********************************

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

********************************/


Node *rotate(Node *head, int k) {
     // Write your code here.
    if(!head || !head->next || k==0) return head;
    Node *rotated=head;
    int len=1;
    while(rotated->next && len++){
        rotated=rotated->next;
    }
    rotated->next=head;
    k=k%len;
    int end=len-k;
    while(end--) rotated=rotated->next;
    
    head=rotated->next;
    rotated->next=NULL;
    
    return head;
}
