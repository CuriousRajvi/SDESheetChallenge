#include<bits/stdc++.h>
vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
{
    // Write your code here. 
    priority_queue<int,vector<int>,greater <int>> minHeap;
    for(int i=0;i<k;i++){
        for(int j=0;j<kArrays[i].size();j++){
            minHeap.push(kArrays[i][j]);
        }
    }
    vector<int> res;
    while(minHeap.size()>0){
        res.push_back(minHeap.top());
        minHeap.pop();
    }
    return res;
}
