void call(int index,int n,int target,vector<vector<int>> &subset,vector<int> &arr,vector<int> &ds){
    //base case
    if(index==n){
        if(target==0){
            subset.push_back(ds);
        }
           return;
    }
    //if(arr[index]<=target){
      else{ 
        ds.push_back(arr[index]);
          //considering
        call(index+1,n,target-arr[index],subset,arr,ds);
        ds.pop_back();
          //without considering
        call(index+1,n,target,subset,arr,ds);
    }
}
vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
    // Write your code here.
    vector<vector<int>>subset;
    vector<int> ds;
    call(0,n,k,subset,arr,ds);
    return subset;
}
