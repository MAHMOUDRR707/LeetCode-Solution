class CustomStack {
public:
    vector<int>  res;
    int len ;
    CustomStack(int maxSize) {
        len = maxSize;
    }
    
    void push(int x) {
        if(res.size() < len) res.push_back(x);
    }
    
    int pop() {
        if(res.empty()) return -1;
        int x = res.back();
        res.pop_back();
        return x;
    }
    
    void increment(int k, int val) {
        int y =  res.size();
        int loop = min(k,y);
        for(int i = 0 ; i < loop;i++){
            res[i]+= val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */