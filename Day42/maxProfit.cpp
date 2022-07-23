int maxProfit(vector<int> &values, vector<int> &weights, int n, int w)
{
    if(n==0 || w==0) return 0;
    int dp[n+1][w+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=w;j++){
            if(i==0 || j==0){
                dp[i][j]=0;
            }
            else if(weights[i-1] <=j){
                dp[i][j]=max(dp[i-1][j-weights[i-1]] + values[i-1],dp[i-1][j]);
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    return dp[n][w];
}
