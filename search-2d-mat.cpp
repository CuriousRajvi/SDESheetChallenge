//code by Rajvi Desai
#include <bits/stdc++.h> 
#include <vector>
using namespace std;
bool findTargetInMatrix(vector < vector < int >> & mat, int m, int n, int target) {
    // Write your code here.
    for(int i=0;i<m;i++){
        if(mat[i][n-1]>=target){
              for(int j=0;j<n;j++){
                 if(mat[i][j]==target)         
                     return true;
              }
                return false;
        }
    }
    return false;
    }
