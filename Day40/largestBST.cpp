/************************************************************

    Following is the Binary Tree node structure
    
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
int maximum;
pair<pair<int,int>,pair<int,int>> solve(TreeNode<int>* root){
    if(root==NULL){
        pair<pair<int,int>,pair<int,int>> p={{INT_MIN,INT_MAX},{true,0}};
        return p;
    }
    pair<pair<int,int>,pair<int,int>> left=solve(root->left);
    pair<pair<int,int>,pair<int,int>> right=solve(root->right);
    if(root->data > left.first.first && root->data < right.first.second &&
       left.second.first==true && right.second.first==true){
        pair<pair<int,int>,pair<int,int>> p={{max(right.first.first,root->data),min(left.first.second,root->data)},{true,left.second.second+right.second.second+1}};
        
        maximum=max(maximum,left.second.second + right.second.second+1);
        return p;
    }
}
int largestBST(TreeNode<int>* root) 
{
    if(root==NULL) return 0;
    maximum=0;
    pair<pair<int,int>,pair<int,int>> p=solve(root);
    return maximum;
}
