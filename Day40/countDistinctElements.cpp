#include<bits/stdc++.h>
vector<int> countDistinctElements(vector<int> &arr, int k) 
{
    vector<int> ans;
    unordered_map<int,int> map;
    for(int i=0;i<k;i++){
        map[arr[i]]++;
    }
    ans.push_back(map.size());
    int n=arr.size();
    for(int i=k;i<n;i++){
        map[arr[i-k]]--;
        if(map[arr[i-k]]==0) map.erase(arr[i-k]);
        map[arr[i]]++;
        ans.push_back(map.size());
    }
    return ans;
}
