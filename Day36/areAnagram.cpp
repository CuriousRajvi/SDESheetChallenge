#include<bits/stdc++.h>
bool areAnagram(string &str1, string &str2){
    if(str1.length()!=str2.length())
        return false;
    vector<int> s1(26,0);
    vector<int> s2(26,0);
    
    //count frequency
    for(int i=0;i<str1.length();i++){
        s1[str1[i]-'a']++;
        s2[str2[i]-'a']++;
        
    }
    for(int i=0;i<str1.length();i++){
        if(s1[i]!=s2[i])
            return false;
    }
    return true;
}
