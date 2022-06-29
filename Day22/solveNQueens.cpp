#include<bits/stdc++.h>
#include<vector>
using namespace std;

bool isSafe(int row,int col,vector<vector<int>>&board,int n){
    //checking upper diagonal
    int r=row;
    int c=col;
     //same column
    while(col>=0){
        if(board[row][col]==1)
            return false;
        col--;
    }
    col=c;
    while(row>=0&&col>=0){
        if(board[row][col]==1)
            return false;
        row--;
        col--;
    }
    row=r;
    col=c;
    //same row
    while(row<n && col>=0){
        if(board[row][col]==1)
            return false;
        row++;
        col--;
    }
    return true;
}
void solve(int col,vector<vector<int>>&board,vector<vector<int>>&ans,int n){
    if(col==n){
        vector<int>temp;
        for(auto it:board){
            for(auto i:it){
                temp.push_back(i);
            }
        }
            ans.push_back(temp);
        
        return;
    }
    for(int i=0;i<n;i++){
        if(isSafe(i,col,board,n)){
            board[i][col]=1;
            solve(col+1,board,ans,n);
            board[i][col]=0;
        }
    }
}
vector<vector<int>> solveNQueens(int n) {
    // Write your code here.
    if(n==2||n==3)
       return {};
    
        vector<vector<int>> ans;
        vector<vector<int>>board(n,vector<int>(n,0));
        //string s(n,'.');
       
        solve(0,board,ans,n);
        return ans;
    
}
