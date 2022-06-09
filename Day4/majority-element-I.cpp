#include <bits/stdc++.h> 
using namespace std;
int findMajorityElement(int arr[], int n) {
	// Write your code here.
    int element=arr[0],count=0;
    for(int i=0;i<n;i++){
        if(count==0){
            element=arr[i];
            count=1;
        }
         if(arr[i]==element){
            count+=1;
        }
        else{
            count-=1; 
        } 
    }
     count=0;
    for(int i=0;i<n;i++) if(arr[i]==element) count++;   
    if(count>n/2)
        return element;
    else
        return -1;
}
