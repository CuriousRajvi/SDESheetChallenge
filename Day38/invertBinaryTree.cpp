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
bool help(TreeNode<int>*root,TreeNode<int>*leaf,stack<TreeNode<int>*> &st){
    st.push(root);
    if(!root->left && !root->right){
        if(root->data==leaf->data)
            return true;
        else{
            st.pop();
            return false;
        }
    }
    if(root->left){
        if(help(root->left,leaf,st)) return true;
    }
    if(root->right){
        if(help(root->right,leaf,st)) return true;
    }
    st.pop();
    return false;
}
TreeNode<int> * invertBinaryTree(TreeNode<int> *root, TreeNode<int> *leaf)
{
    if(!root) return NULL;
    stack<TreeNode<int>*> st;
    bool b=help(root,leaf,st);
    TreeNode<int> *new_r=st.top();
    st.pop();
    TreeNode<int> *p=new_r;
    while(!st.empty()){
        auto cur=st.top();
        st.pop();
        if(cur->left==p){
            cur->left=NULL;
            p->left=cur;
        }
        else{
            cur->right=cur->left;
            cur->left=NULL;
            p->left=cur;
        }
        p=cur;
    }
    return new_r;
}
