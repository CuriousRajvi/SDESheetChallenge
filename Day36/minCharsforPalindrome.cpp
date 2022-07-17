#include<bits/stdc++.h>

//longest prefix suffix array
vector<int> generateLPS(string s){
    int n=s.size();
    vector<int> lps(n,0);
    for(int i=1;i<n;i++){
        int len=lps[i-1];
        while(len>0 && s[i]!=s[len]) len=lps[len-1];
        if(s[i]==s[len]) len++;
        lps[i]=len;
    }
    return lps;
}
int minCharsforPalindrome(string str) {
    string rev=str;
    reverse(rev.begin(),rev.end());
    string s=str+'$'+rev;
    auto lps=generateLPS(s);
    return str.size()-lps.back();
}
