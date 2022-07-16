int atoi(string str) {
    // Write your code here.
    int ans=0;
    for(int i=0;i<str.length();i++){
        if(str[i]>='0' && str[i]<='9')
            ans=ans*10+(str[i]-'0');
    }
    return str[0]=='-'?-ans:ans;
}
