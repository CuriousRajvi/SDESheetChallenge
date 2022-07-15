#include<bits/stdc++.h>
int minTimeToRot(vector<vector<int>>& grid, int n, int m)
{
    // Write your code here. 
    int fresh=0,time=0;
    queue<pair<int,int>> q;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]==2){
                //push into queue
                q.push({i,j});
            }
            else if(grid[i][j]==1){
                fresh++;
            }
        }
    }
    if(fresh==0) return 0;
    while(!q.empty()){
        int size_q=q.size();
        int temp=0;
        while(size_q!=0){
            pair<int,int> p=q.front();
            q.pop();
            
            int x1=p.first;
            int y1=p.second;
            
            int aX[]={1,-1,0,0};
            int aY[]={0,0,1,-1};
            
            for(int i=0;i<4;i++){
                int x=aX[i]+x1;
                int y=aY[i]+y1;
                if(x>=0 && x<n && y>=0 && y<m && grid[x][y]==1){
                    temp++;
                    grid[x][y]=2;
                    q.push({x,y});
                }
            }
            size_q--;
        }
        if(temp!=0) time++;
       }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]==1)
            {
                time=0;
            }
        }
    }
    return time==0?-1:time;
}
