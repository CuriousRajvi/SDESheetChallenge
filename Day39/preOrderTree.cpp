/*************************************************************

    Following is the Binary Tree node structure

    template <typename T>

    class TreeNode{
    public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
        ~TreeNode() {
            if (left){
                delete left;
            }
            if (right){
                delete right;
            }
        }
    };

*************************************************************/

TreeNode<int>* preOrderTree(vector<int> &preOrder){
    if(preOrder.size()==0) return NULL;
    TreeNode<int>* node=new TreeNode<int>(preOrder[0]);
    vector<int> less;
    vector<int> greater;
    for(int i=1;i<preOrder.size();i++){
        if(preOrder[i]<preOrder[0]) 
            less.push_back(preOrder[i]);
        else
            greater.push_back(preOrder[i]);
    }
    node->left=preOrderTree(less);
    node->right=preOrderTree(greater);
    return node;
}
