#include<bits/stdc++.h>
vector<int> maxXorQueries(vector<int> &arr, vector<vector<int>> &queries){
    sort(arr.begin(),arr.end());
    vector<int> v;
    for(int i=0;i<queries.size();i++){
        int x=queries[i][0];
        int limit=queries[i][1];
        int MAX=-1;
        for(int j=0;j<arr.size();j++){
            if(arr[j]>limit)
                break;
            else{
                int res=x^arr[j];
                MAX=max(MAX,res);
            }
        }
        v.push_back(MAX);
    }
    return v;
}
