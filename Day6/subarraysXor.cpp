#include <bits/stdc++.h> 
int subarraysXor(vector<int> &arr, int x)
{
    //    Write your code here.
    int count=0,sum=0;
    map<int,int> map;
    int n=arr.size();
    for(int i=0;i<n;i++){
            sum^=arr[i];
            if(sum==x)
                count++;
            if(map.find(sum^x)!=map.end())
                count+=map[sum^x];
        map[sum]++;
    }
    return count;
}
