#include<bits/stdc++.h>
using namespace std;
struct jobs{
  int deadline;
  int profit;
};
bool comparator(struct jobs j1,jobs j2){
    return j1.profit>j2.profit;
}
int jobScheduling(vector<vector<int>> &jobs)
{
    int n=jobs.size();
    struct jobs job[n];
    for(int i=0;i<n;i++){
        job[i].deadline=jobs[i][0];
        job[i].profit=jobs[i][1];
    }
    sort(job,job+n,comparator);
    int max_deadline=0;
    for(int i=0;i<n;i++){
        max_deadline=max(max_deadline,job[i].deadline);
    }
    vector<int> temp(max_deadline+1,-1);
    int max_profit=0;
    for(int i=0;i<n;i++){
        for(int j=job[i].deadline;j>0;j--){
            if(temp[j]==-1){
                temp[j]=0;
                max_profit+=job[i].profit;
                break;
            }
        }
    }
    return max_profit;
}
