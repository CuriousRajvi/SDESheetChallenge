#include<bits/stdc++.h>
class Kthlargest {
public:
    priority_queue<int> pq;
    Kthlargest(int k, vector<int> &arr) {
       for(int &p: arr) pq.push(-p);
    }

    void add(int num) {
        pq.push(-num);
        pq.pop();
    }

    int getKthLargest() {
       return -pq.top();
    }

};
