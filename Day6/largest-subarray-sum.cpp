#include <bits/stdc++.h> 
int LongestSubsetWithZeroSum(vector < int > arr) {
  // Write your code here
    int n=arr.size();
    unordered_map<int ,int> frequency;
    int max_=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum==0)
            max_=i+1;
        else{
            if(frequency.find(sum)!=frequency.end()){
                max_=max(max_,i-frequency[sum]);
            }
            else{
                frequency[sum]=i;
            }
        }
    }
    return max_;
}
