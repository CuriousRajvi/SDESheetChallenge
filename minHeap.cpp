vector<int> minHeap(int n, vector<vector<int>>& q) {
    // Write your code here.
    priority_queue<int,vector<int>,greater<int>> pq;
    vector<int>res;
    for(auto &d:q){
        if(d[0]==0){
            pq.push(d[1]);
        }
        else if(!pq.empty()){
            res.push_back(pq.top());
            pq.pop();
        }
    }
    return res;
}
