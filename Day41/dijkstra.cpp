#include<bits/stdc++.h>
vector<int> dijkstra(vector<vector<int>> &vec, int v, int edges, int src) {
    vector<pair<int,int>> adj[v];
    for(int i=0;i<edges;i++){
        adj[vec[i][0]].push_back({vec[i][1],vec[i][2]});
        adj[vec[i][1]].push_back({vec[i][0],vec[i][2]});
    }
    queue<pair<int,int>> pq;
    vector<int> dis(v,INT_MAX);
    dis[src]=0;
    pq.push({src,0});
    while(!pq.empty()){
        auto f=pq.front();
        pq.pop();
        int u=f.first;
        int d=f.second;
        for(auto it: adj[u]){
            int v=it.first;
            int t=it.second;
            if(d+t<dis[v]){
                dis[v]=d+t;
                pq.push({v,dis[v]});
            }
        }
    }
 return dis;       
}
