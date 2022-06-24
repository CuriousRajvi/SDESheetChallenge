#include<bits/stdc++.h>
void sum_func(int i,vector<int> a, vector<int> &subset,vector<vector<int>> &ans){
    if(i==a.size()){
        ans.push_back(subset);
        return;
    }
    subset.push_back(a[i]);
    sum_func(i+1,a,subset,ans);
    subset.pop_back();
    while(i+1<a.size() && a[i]==a[i+1]) i++;
    sum_func(i+1,a,subset,ans);
}
vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    // Write your code here.
    sort(arr.begin(),arr.end());
    vector<vector<int>> ans;
    vector<int>subset;
    sum_func(0,arr,subset,ans);
    sort(ans.begin(),ans.end());
    return ans;
}
