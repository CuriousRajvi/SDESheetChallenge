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

int floorInBST(TreeNode<int> * root, int X)
{
    int fVal=0;
    while(root!=NULL){
        if(root->val==X){
            fVal=root->val;
            return fVal;
        }
        else if(root->val > X){
            root=root->left;
        }
        else{
            fVal=root->val;
            root=root->right;
        }
    }
    return fVal;
}
