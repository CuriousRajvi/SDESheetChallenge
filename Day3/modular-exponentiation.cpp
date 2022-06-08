//code by Rajvi Desai
#include <bits/stdc++.h> 
int modularExponentiation(int x, int n, int m) {
	// Write your code here.
    int res = 1;
    int a=x;
    int b=n;

    while(b>0)
    {
        if(b&1)
            res = (1ll* res * a) % m;
        
        a = 1ll * a%m * a%m;
        b = b >> 1;
    }
    return res;
}
