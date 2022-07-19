/************************************************************

    Following is the Binary Tree node structure:
    
    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/
void leftView(TreeNode<int> *root,vector<int>&ans){
    if(root==NULL)
        return;
    if(root->left==NULL && root->right==NULL)
        return;
    
    ans.push_back(root->data);
    leftView(root->left,ans);
    if(root->left==NULL){
        leftView(root->right,ans);
        return;
    }
    return;
}
void leafNodes(TreeNode<int>*root,vector<int>&ans){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL){
        ans.push_back(root->data); 
        return;
    }
    leafNodes(root->left,ans);
    leafNodes(root->right,ans);
    return;
}
void rightView(TreeNode<int>*root,vector<int>&ans){
    if(root==NULL) return;
    if(root->right==NULL && root->left==NULL) return;
    rightView(root->right,ans);
    if(root->right==NULL){
        rightView(root->left,ans);
    }
    ans.push_back(root->data);
    return;
}
vector<int> traverseBoundary(TreeNode<int>* root){
    vector<int> ans;
    if(!root){
        return ans;
    }
    ans.push_back(root->data);
    if(root->left){
        leftView(root->left,ans);
    }
    leafNodes(root->left,ans);
    leafNodes(root->right,ans);
    if(root->right){
        rightView(root->right,ans);
    }
    return ans;
}
