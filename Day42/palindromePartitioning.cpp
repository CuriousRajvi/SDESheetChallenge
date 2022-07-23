#include<bits/stdc++.h>
bool ispali(string str,int i,int j){
    while(i<j){
        if(str[i]!=str[j])
            return false;
        i++;
        j--;
    }
    return true;
}
int partition_dp(string str,int i,int j,vector<vector<int>> &dp){
    if(i>=j || ispali(str,i,j))
        return dp[i][j]=0;
    if(dp[i][j]!=-1)
        return dp[i][j];
    int ans=INT_MAX,count;
    for(int k=i;k<j;k++){
        if(ispali(str,i,k)){
            count=partition_dp(str,k+1,j,dp)+1;
            ans=min(ans,count);
        }
        dp[i][j]=ans;
    }
    return dp[i][j];
}
int palindromePartitioning(string str) {
    int n=str.length();
    vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
    return partition_dp(str,0,n-1,dp);
}
