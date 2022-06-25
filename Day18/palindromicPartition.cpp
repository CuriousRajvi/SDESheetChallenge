bool isPalindrome(int start,int end,string s){
    while(start<=end){
        if(s[start++]!=s[end--])
            return false;
    }
    return true;
}

void func(int index,string s, vector<string> &path,vector<vector<string>> &res){
    if(index==s.size()){
        res.push_back(path);
        return;
    }
    for(int i=index;i<s.size();i++){
        if(isPalindrome(index,i,s)){
            path.push_back(s.substr(index,i-index+1));
            func(i+1,s,path,res);
            path.pop_back();
        }
    }
}
vector<vector<string>> partition(string &s) 
{
    // Write your code here.
    vector<vector<string>> res;
    vector<string>path;
    func(0,s,path,res);
    return res;
}