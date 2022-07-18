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
void solve(TreeNode<int>*root,int level,int &maxLevel,vector<int>&v){
    if(root==NULL) return;
    if(level>maxLevel){
        v.push_back(root->data);
        maxLevel=level;
    }
       solve(root->left,level+1,maxLevel,v);
       solve(root->right,level+1,maxLevel,v);
}
vector<int> getLeftView(TreeNode<int> *root)
{
    int maxLevel=0;
    vector<int> ans;
    solve(root,1,maxLevel,ans);
    return ans;
}
