int longestSubSeg(vector<int> &arr , int n, int k){
    // Write your code here.
    int sum=-1;
    int zero=0;
    int max=0;
    for(int i=0;i<n;i++){
     if(arr[i]==0) 
         zero++;
        while(zero>k){
            sum+=1;
            if(arr[sum]==0)
                zero--;
        }
          int len=i-sum;
        if(len>max){
            max=len;
        }
    }
    return max;
}
