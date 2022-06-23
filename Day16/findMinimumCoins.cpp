int findMinimumCoins(int amount) 
{
    // Write your code here 
    int count=0;
    int arr[]={1,2,5,10,20,50,100,500,1000};
    for(int i=8;i>=0;i--){
        if(amount/arr[i]>=1){
            count+=amount/arr[i];
            amount%=arr[i];
        }
        if(amount==0) break;
    }
    return count;
}
