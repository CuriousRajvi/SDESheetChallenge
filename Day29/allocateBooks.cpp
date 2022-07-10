bool isPossible(vector<int>&time,long long int n,long long int mid,long long int m){
    int allocate=1;
    long long int pages=0;
    for(int i=0;i<m;i++){
        if(pages+time[i]<=mid){
            pages+=time[i];
        }
        else{
            allocate+=1;
            if(allocate>n || time[i]>mid)
                return false;
            pages=time[i];
        }
    }
        return true;
}
long long ayushGivesNinjatest(int n, int m, vector<int> time) 
{
	// Write your code here.
    long long s=0;
    long long sum=0;
    long long ans;
    for(int i=0;i<m;i++){
        sum+=time[i];
    }
    long long e=sum;
    long long mid=(s+(e-s)/2);
    while(s<=e){
        if(isPossible(time,n,mid,m)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=(s+(e-s)/2);
    }
    return ans;
}
