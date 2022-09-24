class SeatManager {
public : 
    set<int> res;
public:
    SeatManager(int n) {
        for(int  i= 1 ; i <  n+1 ;i++){
            res.insert(i);
        }
    }
    
    int reserve() {
        int val =  *res.begin();
        res.erase(val);
        return val;
    }
    
    void unreserve(int seatNumber) {
        res.insert(seatNumber);
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */