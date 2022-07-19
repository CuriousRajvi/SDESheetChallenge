#include<bits/stdc++.h>
/*************************************************************

    Following is the Binary Tree node structure

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/

vector<int> zigZagTraversal(BinaryTreeNode<int> *root)
{
    vector<int> ans;
    int pos=1;
    if(root==NULL) return ans;
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while(!q.empty()){
        int size=q.size();
        vector<int>temp;
        for(int i=0;i<size;i++){
            BinaryTreeNode<int>* front=q.front();
            q.pop();
            temp.push_back(front->data);
            if(front->left!=NULL)q.push(front->left);
            if(front->right!=NULL)q.push(front->right);
        }
        if(pos%2==0)
            reverse(temp.begin(),temp.end());
        for(int i=0;i<size;i++)
            ans.push_back(temp[i]);
         pos=!pos;
        }
    return ans;
}
