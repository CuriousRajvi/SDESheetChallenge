int solve(string &s,int left,int right){
    while(left>=0 && right<s.length() && s[left]==s[right]){
        left--;
        right++;
    }
    return right-left-1;
}
string longestPalinSubstring(string str)
{
    int start=0,end=0,maxlen=0;
    for(int i=0;i<str.length();i++){
        int odd=solve(str,i,i);
        int even=solve(str,i,i+1);
        int len=max(odd,even);
        if(maxlen<len){
            maxlen=len;
            start=i-(len-1)/2;
            end=i+(len)/2;
        }
    }
    return str.substr(start,maxlen);
}
