//code by Rajvi Desai
#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int buy=prices[0],max_profit=0;
    for(int i=0;i<prices.size();i++){
         buy=min(buy,prices[i]);
         max_profit=max(max_profit,prices[i]-buy);
    }
    return max_profit;
    }
