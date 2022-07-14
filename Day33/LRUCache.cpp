#include<bits/stdc++.h>
class node{
    public:
        int key,val;
        node *next;
        node *prev;
    node(int k,int v){
        key=k;
        val=v;
    }
};
class LRUCache
{
public:
    node *head=new node(-1,-1);
    node *tail=new node(-1,-1);
    int size;
    unordered_map<int,node*> m;
    LRUCache(int capacity)
    {
        // Write your code here
        size=capacity;
        head->next=tail;
        tail->prev=head;
    }
void addnode(node *newnode){
    node *temp=head->next;
    head->next=newnode;
    newnode->next=temp;
    temp->prev=newnode;
    newnode->prev=head;
   
}
    void deletenode(node *delnode){
        node *delprev=delnode->prev;
        node *delnext=delnode->next;
        delprev->next=delnext;
        delnext->prev=delprev;
    }
    int get(int key)
    {
        // Write your code here
        if(m.find(key)!=m.end()){
            node *resnode=m[key];
            int res=resnode->val;
            m.erase(key);
            deletenode(resnode);
            addnode(resnode);
            m[key]=head->next;
            return res;
        }
        return -1;
    }

    void put(int key, int value)
    {
        if(m.find(key)!=m.end()){
            node *exist=m[key];
            m.erase(key);
            deletenode(exist);
        }
        if(m.size()==size){
            m.erase(tail->prev->key);
            deletenode(tail->prev);
        }
        addnode(new node(key,value));
        m[key]=head->next;
        // Write your code here
    }
};
