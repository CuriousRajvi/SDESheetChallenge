#include<bits/stdc++.h>
bool comparator(pair<int,int> a,pair<int,int> b){
    double d1=(double)a.second/(double)a.first;
    double d2=(double)b.second/(double)b.first;
    return d1>d2;
}
double maximumValue (vector<pair<int, int>>& items, int n, int w)
{
    // Write your code here.
    // ITEMS contains {weight, value} pairs.
    sort(items.begin(),items.end(),comparator);
    double finalValue=0.0;
    int cur=0;
    for(int i=0;i<n;i++){
        if(cur+items[i].first<=w){
            cur+=items[i].first;
            finalValue+=items[i].second;
        }
        else{
            int remain=w-cur;
            finalValue+=((double)items[i].second/(double)items[i].first)*(double)remain;
            break;
        }
    }
    return finalValue;
}
