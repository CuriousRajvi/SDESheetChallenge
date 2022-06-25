#include<bits/stdc++.h>
void call(int index,int n,int target,vector<vector<int>> &subset,vector<int> &arr,vector<int> &ds){
    //base case
        if(target==0){
            subset.push_back(ds);
           return;
        }
    for(int i=index;i<n;i++){
        if(i>index && arr[i]==arr[i-1]) continue;
        if(arr[i]>target) break;
        ds.push_back(arr[i]);
        call(i+1,n,target-arr[i],subset,arr,ds);
        ds.pop_back();
    }
      

} 

vector<vector<int>> combinationSum2(vector<int> &arr, int n, int k)
{   // Write your code here.
    sort(arr.begin(),arr.end());
    vector<vector<int>>subset;
    vector<int> ds;
    call(0,n,k,subset,arr,ds);
    return subset;
}
