void sumFunc(int i,int sum,vector<int>arr,vector<int> &sumSubsets){
    if(i==arr.size()){
        sumSubsets.push_back(sum);
        return;
    }
    sumFunc(i+1,sum+arr[i],arr,sumSubsets);
    sumFunc(i+1,sum,arr,sumSubsets);
}
vector<int> subsetSum(vector<int> &num)
{
    // Write your code here.
    vector<int> subset_sum;
    sumFunc(0,0,num,subset_sum);
    sort(subset_sum.begin(),subset_sum.end());
    return subset_sum;
}
