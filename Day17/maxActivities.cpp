#include<bits/stdc++.h>
struct activity{
    int start;
    int end;
};
bool comparator( struct activity a1,activity a2){
    return a1.end<a2.end;
}
int maximumActivities(vector<int> &start, vector<int> &finish) {
    // Write your code here.
    int n=start.size();
    struct activity A[n];
    int count=1;
    for(int i=0;i<n;i++){
        A[i].start=start[i];
        A[i].end=finish[i];
    }
    sort(A,A+n,comparator);
    int prev=A[0].end;
    for(int i=1;i<n;i++){
        if(A[i].start>=prev){
            count++;
            prev=A[i].end;
        }
    }
    return count;
}
