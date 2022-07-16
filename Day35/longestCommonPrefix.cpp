string longestCommonPrefix(vector<string> &arr, int n)
{
    // Write your code here
    string s="";
    for(int i=0;i<arr[0].size();i++){
        bool check=false;
        for(int j=0;j<arr.size();j++){
            if(arr[0][i]!=arr[j][i])
                check=true;
        }
        if(!check) s+=arr[0][i];
        else break;
    }
    return s;
}


