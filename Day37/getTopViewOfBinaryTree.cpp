#include<bits/stdc++.h>
/************************************************************

    Following is the TreeNode class structure:

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

vector<int> getTopView(TreeNode<int> *root) {
   vector<int> ans;
   if (root==NULL) return ans;
    queue<pair<TreeNode<int>*,int>> q;
   q.push({root,0});
   
   map<int,int> mp;
   while(!q.empty()){
       TreeNode<int> * node = q.front().first;
       int line = q.front().second;
        q.pop();
      if(mp.count(line)==0) mp[line]=node->val;
       if(node->left){ q.push({node->left,line-1});}
       if(node->right){ q.push({node->right,line+1});}
       
   }
for(auto it: mp){
   ans.push_back(it.second);
}
return ans;
}
