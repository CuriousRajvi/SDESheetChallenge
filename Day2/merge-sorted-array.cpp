// code by Rajvi Desai
#include <bits/stdc++.h> 
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
    vector<int> a;
    for(int i=0;i<m;i++)
        a.push_back(arr1[i]);
   for(int j=0;j<n;j++)
       a.push_back(arr2[j]);
    sort(a.begin(),a.end());
   
    return a;
}
