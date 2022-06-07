//code by Rajvi Desai
#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
    int a[n+1]={0};
    for(auto i:arr){
        a[i]++;
    }
    pair<int,int> p;
    for(int i=0;i<n+1;i++){
        if(a[i]==0){
            p.first=i;
        }
        if(a[i]>1){
            p.second=i;
        }
    }
    return p;
}
