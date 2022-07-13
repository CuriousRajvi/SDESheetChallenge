#include<bits/stdc++.h>
class Stack {
	// Define the data members.
    queue<int> q;
    int n;
   public:
    Stack() {
        // Implement the Constructor.
        n=-1;
    }

    /*----------------- Public Functions of Stack -----------------*/

    int getSize() {
        // Implement the getSize() function.
        return q.size();
    }

    bool isEmpty() {
        // Implement the isEmpty() function.
        return (q.empty());
    }

    void push(int element) {
        // Implement the push() function.
        n++;
        q.push(element);
        for(int i=0;i<n;i++){
            q.push(q.front());
            q.pop();
        }
    }

    int pop() {
        // Implement the pop() function.
        if(!q.empty()){
            int popped=q.front();
            q.pop();
            n--;
            return popped;
        }
        return -1;
    }

    int top() {
        // Implement the top() function.
        if(!q.empty())
            return q.front();
        return  -1;
    }
};
