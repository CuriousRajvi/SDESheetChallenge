
int calculateMinPatforms(int at[], int dt[], int n) {
    // Write your code here.
    int maxPlatforms=1,platform=1;
    sort(at,at+n);
    sort(dt,dt+n);
    int i=1,j=0;
    while(i<n && j<n){
        if(at[i]<=dt[j]){
            platform++;
            i++;
        }
        else if(at[i]>=dt[j]){
            platform--;
            j++;
        }
        if(platform>=maxPlatforms)
            maxPlatforms=platform;
    }
   
    return maxPlatforms;
 }
