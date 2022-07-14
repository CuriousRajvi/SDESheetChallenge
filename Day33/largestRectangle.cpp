#include<stack> 
int largestRectangle(vector < int > & h) {
   int n=h.size();
     int left[n],right[n];
     stack<int> st;
     
     for(int i=0;i<n;i++){
         while(!st.empty() && h[st.top()]>=h[i])
         {
             st.pop();
         }
         if(st.empty()) left[i]=0;
         else
             left[i]=st.top()+1;
         st.push(i);
     }
     while(!st.empty()){
         st.pop();
     }
     for(int i=n-1;i>=0;i--){
         while(!st.empty() && h[st.top()]>=h[i]){
             st.pop();
         }
          if(st.empty()) right[i]=n-1;
         else
             right[i]=st.top()-1;
         st.push(i);
     }
     int m=0;
     for(int i=0;i<n;i++){
         m=max(m,h[i]*(right[i]-left[i]+1));
     }
         return m;
     }
 
