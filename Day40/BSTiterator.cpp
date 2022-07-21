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

class BSTiterator
{
    public:
    stack<TreeNode<int>*> order;
    void inorder(TreeNode<int>* root){
        while(root!=NULL){
            order.push(root);
            root=root->left;
        }
    }
    BSTiterator(TreeNode<int> *root)
    {
        inorder(root);
    }

    int next()
    {
        TreeNode<int> *t=order.top();
        order.pop();
        inorder(t->right);
        return t->data;
    }

    bool hasNext()
    {
        return !order.empty();
    }
};


/*
    Your BSTIterator object will be instantiated and called as such:
    BSTIterator iterator(root);
    while(iterator.hasNext())
    {
       print(iterator.next());
    }
*/
