#include<bits/stdc++.h>
vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    vector<int> indegree(v,0);
    vector<int> adj[v];
    for(auto x:edges){
        adj[x[0]].push_back(x[1]);
    }
    for(int i=0;i<v;i++){
        for(auto x: adj[i]) indegree[x]++;
    }
    queue<int> q;
    vector<int> topSort;
    for(int i=0;i<v;i++){
        if(indegree[i]==0)
            q.push(i);
    }
    while(!q.empty()){
        int u=q.front();
        q.pop();
        topSort.push_back(u);
        for(int x:adj[u]){
            if(--indegree[x]==0) q.push(x);
        }
    }
    return topSort;
}
