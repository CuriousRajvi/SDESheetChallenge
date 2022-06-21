#include<bits/stdc++.h>
using namespace std;
struct meeting{
    int start;
    int end;
    int pos;
};
bool static comparator(struct meeting m1,meeting m2){
    if(m1.end<m2.end) return true;
    else if(m1.end>m2.end) return false;
    else if(m1.pos<m2.pos) return true;
    return false;
}
vector<int> maximumMeetings(vector<int> &s, vector<int> &e) {
    // Write your code here.
    int size=s.size();
    struct meeting meet[size];
    for(int i=0;i<size;i++){
        meet[i].start=s[i], meet[i].end=e[i], meet[i].pos=i+1;
    }
    sort(meet,meet+size,comparator);
    vector<int>result;
    int l=meet[0].end;
    result.push_back(meet[0].pos);
    for(int i=1;i<size;i++){
        if(meet[i].start>l){
            l=meet[i].end;
            result.push_back(meet[i].pos);
        }
    }
 
    
    return result;
}
