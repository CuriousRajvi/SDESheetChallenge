#include <bits/stdc++.h> 
int uniquePaths(int m, int n) {
	// Write your code here.
    int paths=1;
    for(int i=1;i<=n-1;i++){
        paths=(paths*(m+i-1))/i;
    }
    return paths;
}
