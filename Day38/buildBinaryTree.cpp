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
unordered_map<int,int> NodeMap;
TreeNode<int> *help(vector<int> &preorder,int cur,int l,int h){
    if(l>h || cur==preorder.size()) return nullptr;
    int value=preorder[cur];
    int pos=NodeMap[value];
    TreeNode<int>*node=new TreeNode<int>(value);
    
    node->left=help(preorder,cur+1,l,pos-1);
    node->right=help(preorder,cur+pos-l+1,pos+1,h);
    
    return node;
}

TreeNode<int> *buildBinaryTree(vector<int> &inorder, vector<int> &preorder)
{
	for(int i=0;i<inorder.size();i++){
        NodeMap[inorder[i]]=i;
    }
    return help(preorder,0,0,inorder.size()-1);
}
