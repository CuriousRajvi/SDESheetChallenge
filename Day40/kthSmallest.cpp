#include<bits/stdc++.h>
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

int kthSmallest(TreeNode<int> *root, int k)
{
    stack<TreeNode<int>*>s;
    while(root || !s.empty()){
        while(root){
            s.push(root);
            root=root->left;
        }
        root=s.top();
        s.pop();
        if(--k==0)break;
        root=root->right;
    }
    return root->data;
}
