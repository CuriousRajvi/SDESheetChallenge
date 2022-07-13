#include<stack>
vector<int> nextGreater(vector<int> &arr, int n) {
    // Write your code here
    vector<int> age(n,-1);
    stack<int>stack;
    for(int i=n-1;i>=0;i--){
        while(!stack.empty() && stack.top()<=arr[i]){
            stack.pop();
        }
        if(!stack.empty()){
            age[i]=stack.top();
        }
        stack.push(arr[i]);
    }
return age;
}
