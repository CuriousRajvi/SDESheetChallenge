#include<bits/stdc++.h>
vector<int> KMostFrequent(int n, int k, vector<int> &arr)
{
    //map and max heap
    unordered_map<int,int> map;
    for(auto i: arr)
        map[i]++;
    
    priority_queue<pair<int,int>> pq;
    for(auto it:map){
        pq.push({it.second,it.first});
    }
    vector<int> ans;
    while(k--){
        ans.push_back(pq.top().second);
        pq.pop();
    }
    sort(ans.begin(),ans.end());
    return ans;
}
