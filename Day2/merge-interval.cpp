//code by Rajvi Desai
#include <bits/stdc++.h> 
using namespace std;
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    // Write your code here.
    //sorting the intervals if they are not sorted
    sort(intervals.begin(),intervals.end());
    
    vector<vector<int>> merged;
    
    for(int i=0;i<intervals.size();i++){
        //checking if they are empty or not and previous is less than the given interval or not
        if(merged.empty()||merged.back()[1] < intervals[i][0]){
            vector<int> v={
                 intervals[i][0],
                intervals[i][1]
            };
            merged.push_back(v);
        }
         else{
                merged.back()[1]=max(merged.back()[1],intervals[i][1]);
            }
        }
    return merged;
}
