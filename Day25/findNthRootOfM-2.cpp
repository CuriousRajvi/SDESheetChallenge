//approach-2
double findNthRootOfM(int n, long long m) {
	// Write your code here.
    double low=0.0;
    double high=m;
    long double k=0.0;
    for(int j=1;j<=100;j++){
        double mid=(low+high)/2.00,ans=1.00;
        
        for(int i=1;i<=n;i++){
            ans*=mid;
        }
        if(ans<=m){
            k=mid;
            low=mid;
        }
        else{
            high=mid;
        }   
    }
    return k;
}
