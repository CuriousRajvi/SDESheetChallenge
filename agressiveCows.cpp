bool rec(vector<int> pos,int distance,int cow){
    int c=1,placed=0;
    for(int i=1;i<pos.size();i++){
        if(pos[i]-pos[placed]>=distance){
            placed=i;
            c++;
        }
    }
    if(c>=cow) return true;
    else return false;
}
int chessTournament(vector<int> positions , int n ,  int c){
	// Write your code here
    sort(positions.begin(),positions.end());
    int l=0,h=positions[n-1],res;
    while(l<=h){
        int mid=(l+h)/2;
        if(rec(positions,mid,c)){
            res=mid;
            l=mid+1;
        }
        else
            h=mid-1;
    }
    return res;
}
