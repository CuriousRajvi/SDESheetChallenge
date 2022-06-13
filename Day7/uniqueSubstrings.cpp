#include <bits/stdc++.h> 
int uniqueSubstrings(string input)
{
    //Write your code here
     int max_=INT_MIN;
    int l=0;
    unordered_set<int> set;
       
    for(int r=0;r<input.length();r++){
            if(set.find(input[r])!=set.end()){
                while(l<r && set.find(input[r]!=input.end())){
                    set.erase(input[l]);
                    l++;
                }
            }
            set.insert(input[r]);
        max_=max(max_,r-l+1);
        }
    
    return max_;
}
