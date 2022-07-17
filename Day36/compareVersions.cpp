#include<bits/stdc++.h>
int compareVersions(string a, string b) 
{
   int i = 0 ,j = 0, lenA=a.length(),lenB=b.length() ; 
        while(i<lenA || j<lenB){
           long long x = 0 ;
            long long y = 0 ; 
            
            // index out of bound check. If not then convert that part into int 
            while(i < lenA && a[i] != '.'){
                x = x*10 + a[i]-'0' ;  i++ ; 
            }
            
            // same as above 
            while(j < lenB &&  b[j] != '.'){
                y = y*10 + b[j]-'0' ; j++ ; 
            }
            
            i++ ; j++ ; 
         
            
            if(x < y) return -1 ; 
            else if(x>y) return 1 ; 
        }
        return 0 ; 
    }
