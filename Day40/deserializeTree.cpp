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
TreeNode<int> *s;
string serializeTree(TreeNode<int> *root)
{
    s=root;
    string str="";
    return "";
}

TreeNode<int>* deserializeTree(string &serialized)
{
     return s;
}
