bool findPattern(string p, string s)
{
    for(int i=0;i<=s.length()-p.length();i++){
    if(s.substr(i,p.length())==p)
        return true;
    }
    return false;
}
