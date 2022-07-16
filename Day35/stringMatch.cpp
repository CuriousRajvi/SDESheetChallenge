#include<bits/stdc++.h>
vector<int> stringMatch(string &str, string &pat) {
    vector<int> indices;
    bool flag=false;
    for(int i=0;i<str.length();i++){
        if(str.substr(i,pat.length())==pat){
            indices.push_back(i);
            flag=true;
        }
    }
    if(!flag){
        return {};
    }
    return indices;
}
