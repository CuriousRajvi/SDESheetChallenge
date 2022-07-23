#include<bits/stdc++.h>
int solve(string s,string temp,vector<vector<int>> &dp){
    if(s.size()==0 || temp.size()==0)  return 0;
    if(dp[s.size()][temp.size()]>-1) return dp[s.size()][temp.size()];
    int b=0,c=0;
    if(s[0]==temp[0]){
        return dp[s.size()][temp.size()]=solve(s.substr(1),temp.substr(1),dp)+1;
    }
    b=solve(s.substr(1),temp,dp);
    c=solve(s,temp.substr(1),dp);
    return dp[s.size()][temp.size()]=max(b,c);
}
int lcs(string s, string t)
{
    vector<vector<int>> dp(s.size()+1,vector<int> (t.size()+1,-1));
    return solve(s,t,dp);
}
