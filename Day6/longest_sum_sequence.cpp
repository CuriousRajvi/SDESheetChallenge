//brute force approach
#include <bits/stdc++.h> 
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here.
    int count=0;
    if(arr.size()==0)
        return 0;
    sort(arr.begin(),arr.end());
    int prev=arr[0];
    int curr=1;
    for(int i=0;i<n;i++){
        if(arr[i]==prev+1)
            curr+=1;
        else if(arr[i]!=prev)
            curr=1;
        prev=arr[i];
        count=max(count,curr);
    }
    return count;
}
