//brute force solution
#include <bits/stdc++.h> 
long getTrappedWater(long *arr, int n){
    // Write your code here.
    long waterTrapped=0;
    long *left=new long[n];
    long *right=new long[n];
    left[0]=arr[0];
    for(int i=1;i<n;i++){
        left[i]=max(arr[i],left[i-1]);
    }
    right[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--){
        right[i]=max(arr[i],right[i+1]);
    }
    for(int i=0;i<n;i++){
        waterTrapped+=min(left[i],right[i])-arr[i];
    }
    return waterTrapped;
}
