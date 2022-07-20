#include<bits/stdc++.h>
/*
    ----------------- Binary Tree node class for reference -----------------

    template <typename T>
    class BinaryTreeNode {
        public : 
            T data;
            BinaryTreeNode<T> *left;
            BinaryTreeNode<T> *right;
            BinaryTreeNode<T> *next;

            BinaryTreeNode(T data) {
                this -> data = data;
                left = NULL;
                right = NULL;
                next = NULL;
            }
    };
*/

void connectNodes(BinaryTreeNode< int > *root) {
    if(root==NULL) return;
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while(!q.empty()){
        int s=q.size();
        for(int i=1;i<=s;i++){
            BinaryTreeNode<int>* temp=q.front();
            q.pop();
            if(i<s) temp->next=q.front();
            if(temp->left)q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
    }
}
