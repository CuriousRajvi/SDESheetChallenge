//code by Rajvi Desai

#include <bits/stdc++.h> 
long long mergesort(vector<long long> & arr, long long l, long long r, long long &k){
    long long mid=l+(r-l)/2;
    if(arr[r]<k){
        return r+1;
    }
    if(arr[mid]>k &&(mid==l|| arr[mid-1]<k)){
        return mid;
    }
    else if(arr[mid]>k){
        return mergesort(arr,l,mid-1,k);
    }
    else{
        return mergesort(arr,mid+1,r,k);
    }
}
long long getInversions(long long *arr, int n){
    // Write your code here.
    vector<long long> arr1;
    arr1.push_back(arr[0]);
    long long a=0;
    for(long long i=1;i<n;i++){
        long long pos=mergesort(arr1,0,arr1.size()-1, arr[i]);
        a+=arr1.size()-pos;
        arr1.insert(arr1.begin()+pos, arr[i]);
    }
    return a;
}
