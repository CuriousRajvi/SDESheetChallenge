//approach -2
#include<bits/stdc++.h>
vector<int> lps(string p,int n){
    vector<int> lp(n);
    int len=0;
    int i=1;
    lp[0]=0;
    while(i<n){
        if(p[i]==p[len]){
            len++;
            lp[i]=len;
            i++;
        }
        else{
            if(len!=0){
                len=lp[len-1];
            }
            else{
                lp[i]=0;
                i++;
            }
        }
    }
    return lp;
}
bool findPattern(string p, string s)
{
    int n=s.length();
    int m=p.length();
    vector<int> pi=lps(p,m);
    int i=0,j=0;
    while(i<n){
        if(s[i]==p[j]){
            i++;
            j++;
        }
        if(j>=m) return true;
        else if(i<n && s[i]!=p[j]){
            if(j!=0)
                j=pi[j-1];
            else
                i+=1;
        }
    }
    return false;
  }
