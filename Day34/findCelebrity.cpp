/*
	This is signature of helper function 'knows'.
	You should not implement it, or speculate about its implementation.

	bool knows(int A, int B); 
	Function 'knows(A, B)' will returns "true" if the person having
	id 'A' know the person having id 'B' in the party, "false" otherwise.
*/

int findCelebrity(int n) {
 	// Write your code here.
    int k=0;
    for(int i=1;i<n;i++){
        if(knows(k,i))
            k=i;
    }
    for(int i=0;i<n;i++){
        if(i!=k && (knows(k,i)==1 || knows(i,k)==0)) return -1;
    }
    return k;
}
