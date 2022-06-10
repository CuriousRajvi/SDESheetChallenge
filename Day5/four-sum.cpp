#include <bits/stdc++.h> 

string fourSum(vector<int> arr, int target, int n) {
    // Write your code here.
   unordered_map<int,pair<int,int>> sum_pair;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            sum_pair[target-arr[i]-arr[j]]={i,j};
        }
    }
     for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
    if(sum_pair.find(arr[i]+arr[j])!=sum_pair.end() and sum_pair[arr[i]+arr[j]].first!=i and sum_pair[arr[i]+arr[j]].second!=j){
            return "Yes";
        }
            }
    }
    return "No";
}
