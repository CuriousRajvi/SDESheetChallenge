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
Node *intersectionPresent(Node *firstHead, Node *secondHead){
    while(secondHead!=NULL){
        Node *temp=firstHead;
        while(temp!=NULL){
            if(temp==secondHead) return secondHead;
            temp=temp->next;
        }
        secondHead=secondHead->next;
    }
    return NULL;

}
int findIntersection(Node *firstHead, Node *secondHead)
{
    //Write your code here
    int data;
    Node *intersect=intersectionPresent(firstHead,secondHead);
        if(intersect==NULL)
            data=-1;
        else
            data=intersect->data;
    return data;
    }
