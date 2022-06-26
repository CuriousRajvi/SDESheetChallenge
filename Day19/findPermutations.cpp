void solve(string &s,vector<string>&ans,int i){
    if(i>=s.length()){
        ans.push_back(s);
        return;
    }
    for(int j=i;j<s.length();j++){
        swap(s[i],s[j]);
        solve(s,ans,i+1);
        swap(s[i],s[j]);
    }
}
vector<string> findPermutations(string &s) {
    // Write your code here.
    vector<string>ans;
    int i=0;
    solve(s,ans,i);
    return ans;
}
