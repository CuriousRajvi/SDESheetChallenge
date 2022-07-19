#include<bits/stdc++.h>
/************************************************************
   
   Following is the TreeNode class structure
   
   class TreeNode<T>
   { 
   public:
        T data; 
        TreeNode<T> *left;
        TreeNode<T> *right;
   
        TreeNode(T data) 
  		{ 
            this -> data = data; 
            left = NULL; 
            right = NULL; 
        }
   };
   
   
 ************************************************************/
map<int,int> mp;

TreeNode<int>* BT(vector<int> &post,int postStart,int postEnd,vector<int>&in,int instart,int inend){
    if(postStart>postEnd || instart>inend) return NULL;
    TreeNode<int> *root=new TreeNode<int>(post[postEnd]);
    int i=mp[post[postEnd]];
    int leftNums=i-instart;
    
    root->left=BT(post,postStart,postStart+leftNums-1,in,instart,i-1);
    root->right=BT(post,postStart+leftNums,postEnd-1,in,i+1,inend);
    return root;
}

TreeNode<int>* getTreeFromPostorderAndInorder(vector<int>& postOrder, vector<int>& inOrder) 
{
    for(int i=0;i<inOrder.size();i++)
        mp[inOrder[i]]=i;
    
    return BT(postOrder,0,postOrder.size()-1,inOrder,0,inOrder.size()-1);
}
