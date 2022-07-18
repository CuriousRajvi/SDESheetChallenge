#include<bits/stdc++.h>
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
void solve(TreeNode<int>*root,map<int,int> &mp,int level){
    if(root==NULL)
        return;
    else
        mp[level]++;
    solve(root->right,mp,level+1);
    solve(root->left,mp,level+1);
}
int getMaxWidth(TreeNode<int> *root)
{
    map<int,int> mp;
    solve(root,mp,1);
    int result=0;
    for(auto it:mp){
        int n=it.second;
        result=max(result,n);
    }
    return result;
}
