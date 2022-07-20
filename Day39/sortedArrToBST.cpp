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
TreeNode<int> *help(vector<int> &arr,int start,int end){
    if(start>end)
        return NULL;
    int mid=(start+end)/2;
    TreeNode<int> *cur=new TreeNode<int>(arr[mid]);
    cur->left=help(arr,start,mid-1);
    cur->right=help(arr,mid+1,end);
    return cur;
}
TreeNode<int>* sortedArrToBST(vector<int> &arr, int n)
{
    if(n==0)
        return NULL;
    return help(arr,0,n-1);
}
