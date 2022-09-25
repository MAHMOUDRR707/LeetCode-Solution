class MyCircularQueue {
public :
    vector<int> res;
public:
    
    int n = 0;
    MyCircularQueue(int k) {
        n =  k;        
    }
    
    bool enQueue(int value) {
        if(res.size() < n){
            res.push_back(value);
            return true;
        }
        return false;
        
    }
    
    bool deQueue() {
        if(!res.empty()){
            res.erase(res.begin());
            return true;
        }
        return false;
        
    }
    
    int Front() {
        
        if(isEmpty()) return -1;
        return res[0];
    }
    
    int Rear() {
        if(res.empty()) return -1;
        return  res.back();
    }
    
    bool isEmpty() {
        return res.empty();
    }
    
    bool isFull() {
        return res.size() == n;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */