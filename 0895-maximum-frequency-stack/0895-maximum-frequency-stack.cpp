class FreqStack {
public:
    priority_queue<pair<int, pair<int, int>>> pq;
    map<int,int>  res;
    int t = 0 ;
    FreqStack() {
        
    }
    
    void push(int val) {
        res[val]++;
        t++;
        pq.push({res[val] , {t,val}});
    }
    
    int pop() {
        auto  tp =  pq.top();
        pq.pop();
        res[tp.second.second]--;
        return tp.second.second;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */