#include<bits/stdc++.h>
int maximumProduct(vector<int> &arr, int n)
{
    int ans=INT_MIN;
    int maximum=1;
    int minimum=1;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            int temp=maximum;
            maximum=max(minimum*arr[i],arr[i]);
            minimum=min(temp*arr[i],arr[i]);
        }
        else if(arr[i]>=0){
            maximum=max(maximum*arr[i],arr[i]);
            minimum=min(minimum*arr[i],arr[i]);
        }
        ans=max(ans,maximum);
    }
    return ans;
}
