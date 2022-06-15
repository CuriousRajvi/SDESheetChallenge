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
int findIntersection(Node *first, Node *second)
{
    //Write your code here
    if(first==NULL || second==NULL)
        return NULL;
    Node *f=first;
    Node *s=second;
    while(f!=s){
        if(f==NULL)
            f=second;
        else
            f=f->next;
        if(s==NULL)
            s=first;
        else
            s=s->next;
        }
    if(f==NULL)
        return -1;
    else
        return f->data;
    }
