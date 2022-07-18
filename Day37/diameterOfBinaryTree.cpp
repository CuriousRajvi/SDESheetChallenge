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
pair<int,int> solve(TreeNode<int>*root){
    if(root==NULL){
        return{0,0};
    }
    pair<int,int> left=solve(root->left);
    pair<int,int> right=solve(root->right);
    int height=1+max(left.first,right.first);
    int diameter=max(left.first+right.first,max(left.second,right.second));
    return {height,diameter};    
}
int diameterOfBinaryTree(TreeNode<int> *root)
{
    return solve(root).second;
}
