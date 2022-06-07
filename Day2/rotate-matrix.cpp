//code by Rajvi Desai
#include <bits/stdc++.h> 
using namespace std;
void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    // Write your code here
   int r1 =0,r2=n-1,c1=0,c2=m-1;
    if(r2==0 or c2 ==0)return ;
    while(c1<c2 and r1<r2) {
        int temp = mat[r1][r1];
        for(int j = c1+1;j<=c2;j++){
            swap(temp,mat[r1][j]); 
        }
        for(int i=r1+1;i<=r2;i++){
            swap(temp,mat[i][c2]);
        }
        for(int j= c2-1;j>=c1;j--){
            swap(temp,mat[r2][j]);
        }
        for(int i = r2-1;i>=r1;i--){
            swap(temp,mat[i][c1]);
        }
        r1++;r2--;
        c1++;c2--;
    }
}
