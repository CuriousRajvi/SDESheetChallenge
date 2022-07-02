#include<bits/stdc++.h>
void solve(int i,int n,string &temp,vector<string> &ans,string &s,vector<string> &dictionary,unordered_set<string> &st){
    if(i==n){
        ans.push_back(temp);
        return;    
    }
    for(int j=1;j<=n-i;j++){
        if(st.find(s.substr(i,j))!=st.end()){
            temp+=string(s.substr(i,j));
            temp+=" ";
            solve(i+j,n,temp,ans,s,dictionary,st);
            temp.resize(temp.size()-(j+1));
        }
    }
}

vector<string> wordBreak(string &s, vector<string> &dictionary)
{
    // Write your code here
    unordered_set<string>st;
    for(int i=0;i<dictionary.size();i++)st.insert(dictionary[i]);
    int n=s.size();
      vector<string>ans;
    string temp;
    solve(0,n,temp,ans,s,dictionary,st);
    return ans;
}
