//optimal solution
#include <bits/stdc++.h> 
long getTrappedWater(long *arr, int n){
    // Write your code here.
    long waterTrapped=0;
    long lMax=0,rMax=0;
    int i=0,j=n-1;
     while(i<j){
         lMax=max(lMax,arr[i]);
         rMax=max(rMax,arr[j]);
         if(lMax<rMax){
             waterTrapped+=(lMax-arr[i]);
             i++;
         }
         else{
             waterTrapped+=(rMax-arr[j]);
             j--;
         }
     }
    return waterTrapped;
}
