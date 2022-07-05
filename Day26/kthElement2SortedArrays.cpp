#include<bits/stdc++.h>
int ninjaAndLadoos(vector<int> &row1, vector<int> &row2, int m, int n, int k) {
    // Write your code here.
    if(m>n) return ninjaAndLadoos(row2,row1,n,m,k);
    
    int l=max(0,k-n);
    int h=min(k,m);
    
    while(l<=h){
        int m1=(l+h)/2;
        int m2=k-m1;
    
    int l1=(m1==0)? INT_MIN : row1[m1-1];
    int l2=(m2==0)? INT_MIN : row2[m2-1];
    int r1=(m1==m)? INT_MAX : row1[m1];
    int r2=(m2==n)? INT_MAX : row2[m2];
  
        if(l1<=r2 && l2<=r1) return max(l1,l2);
        else if(l1>r2) h = m1-1;
        else l = m1+1;
    }
    return 1;
}
