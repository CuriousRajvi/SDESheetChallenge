string reverseString(string str)
{
    string ans="";
    for(int i=str.length()-1;i>=0;i--){
        if(str[i]==' ')
            continue;
        int j=i;
        while(j>=0 and str[j]!=' '){
            j--;
        }
        ans+=(str.substr(j+1,i-j));
        ans+=' ';
        i=j;
    }
    return ans;
}
