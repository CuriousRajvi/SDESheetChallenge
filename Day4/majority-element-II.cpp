#include <bits/stdc++.h> 
using namespace std;
vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    vector<int> major;
    int n=arr.size()/3;
    unordered_map<int,int> frequency;
    for(int i=0;i<arr.size();i++){
        frequency[arr[i]]++;
    }
    for(auto &i:frequency){
        if(i.second>n){
            major.push_back(i.first);
        }
    }
   return major;
}
