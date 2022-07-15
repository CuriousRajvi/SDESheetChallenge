//Optimized
#include<bits/stdc++.h>
vector<int> findSpans(vector<int> &p) {
    int n=p.size();
    vector<int> ans;
    ans.push_back(1);
    stack<int> st;
    st.push(0);
    for(int i=1;i<n;i++){
        while(!st.empty() && p[st.top()]<=p[i]) st.pop();
           if(st.empty()) ans.push_back(i+1);
           else ans.push_back(i-st.top());
            st.push(i);
    }
    return ans;
}
