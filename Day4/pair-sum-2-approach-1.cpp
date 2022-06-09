//Code by Rajvi Desai
//approach-1
//brute-force
#include <bits/stdc++.h> 
vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
    vector<vector<int>> pairs;
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]+arr[j]==s){
                pairs.emplace_back(i);
                pairs.emplace_back(j);
                break;
            }
        }
        if(pairs.size()==2)
            break;
    }
    return pairs;
}
