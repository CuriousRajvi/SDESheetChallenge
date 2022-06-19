//Code by Rajvi Desai
//two pointer approach
#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	// Write your code here.
    sort(arr.begin(),arr.end());
    vector<vector<int>> result;
    
    for(int i=0;i<n-2;i++){
        if(i==0 || (i>0 && arr[i]!=arr[i-1])){
            int low=i+1;
            int high=n-1;
            int sum=K-arr[i];
            
            while(low<high){
                if(arr[low]+arr[high]==sum){
                    vector<int> temp;
                    temp.push_back(arr[i]);
                    temp.push_back(arr[low]);
                    temp.push_back(arr[high]);
                    result.push_back(temp);
                    while(low<high && arr[low]==arr[low+1]) low++;
                    while(low<high && arr[high]==arr[high-1]) high--;
                    
                    low++;
                    high--;
                }
                else if(arr[low]+arr[high] < sum) low++;
                else high--; 
            }
        }
    }
        return result;
}
