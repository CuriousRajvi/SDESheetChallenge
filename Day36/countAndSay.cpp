#include<bits/stdc++.h>
string writeAsYouSpeak(int n) 
{
    string result="1";
    for(int i=1;i<n;i++){
        string temp="";
        int count=1;
        for(int j=0;j<result.length()-1;j++){
            if(result[j]==result[j+1])
                count++;
            else{
                temp+=(to_string(count)+result[j]);
                count=1;
            }
        }
        temp+=to_string(count)+result[result.length()-1];
        result=temp;
    }
    return result;
}
