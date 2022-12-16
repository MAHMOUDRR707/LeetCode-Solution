class MyQueue {
public :
    vector<int>res;
public:
    MyQueue() {
        vector<int> res;
    }
    
    void push(int x) {
        res.insert(res.begin(),x);
    }
    
    int pop() {
        int x = res.back();
        res.pop_back() ;
        return x ;
    }
    
    int peek() {
        return res.back();
    }
    
    bool empty() {
        return res.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */