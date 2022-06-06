//Code by Rajvi Desai
#include <bits/stdc++.h> 
using namespace std;
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    //  Write your code here.
    //next_permutation(permutation.begin(),permutation.end()); built-n function
    //finding highest index
   int index = -1;
   for(int i = n - 2; i >= 0; --i){
       if(permutation[i] < permutation[i + 1]){
           index = i;
            break;
       }
   }
   if(index == -1){
       sort(permutation.begin(), permutation.end());
       return permutation;
   }
   int next = -1;
   for(int i = n - 1; i > index; i--){
       if(permutation[i] > permutation[index]){
           next = i;
           break;
       }
   }
   swap(permutation[index], permutation[next]);
   reverse(permutation.begin() + index + 1, permutation.end());
   return permutation;
}
