void dfs(vector<int> &temp,vector<int> &vis,int n,int target,vector<vector<int>> &adj){
    for(int i=0;i<n;i++){
        if(!vis[i] && adj[target][i]){
            temp.push_back(i);
            vis[i]=1;
            dfs(temp,vis,n,i,adj);
        }
    }
}
vector<vector<int>> depthFirstSearch(int n, int E, vector<vector<int>> &edges)
{
    vector<vector<int>> adj(n,vector<int>(n,0));
    for(int i=0;i<edges.size();i++){
        adj[edges[i][0]][edges[i][1]]=1;
        adj[edges[i][1]][edges[i][0]]=1;
        
    }
    vector<vector<int>> ans;
    vector<int> vis(n,0);
    for(int i=0;i<n;i++){
        vector<int> temp;
        if(!vis[i]){
            temp.push_back(i);
            vis[i]=1;
            dfs(temp,vis,n,i,adj);
            ans.push_back(temp);
        }
    }
    return ans;
}
