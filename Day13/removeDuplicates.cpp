int removeDuplicates(vector<int> &arr, int n) {
    // Write your code here.
    if(arr.size()==0)
        return 0;
    int j=0;
    for(int i=1;i<arr.size();i++){
            if(arr[i]!=arr[j]){
                j++;
                arr[j]=arr[i];
            }
    }
    return j+1;
}
