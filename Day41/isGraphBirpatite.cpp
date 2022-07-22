bool dfs(vector<int> adj[],vector<int> &color,int i){
    if(color[i]==-1){
        color[i]=i;
    }
    for(auto x:adj[i]){
        if(color[x]==-1){
            color[x]=1-color[i];
            if(!dfs(adj,color,x)) return false;
        }
        else if(color[x]==color[i]) return false;
    }
    return true;
}

bool isGraphBirpatite(vector<vector<int>> &edges) {
    int n=edges.size();
    vector<int> adj[n+1];
    vector<int>color(n+1,-1);
    for(int i=0;i<edges.size();i++){
        for(int j=0;j<edges[0].size();j++){
            if(edges[i][j]==1){
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }
    }
    for(int i=0;i<n;i++){
        if(color[i]==-1){
            if(!dfs(adj,color,i)) return false;
        }
    }
    return true;
}
