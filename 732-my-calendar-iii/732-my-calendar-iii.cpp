class MyCalendarThree {
public:
    map<int,int> res;
    MyCalendarThree() {
        
    }
    
    int book(int start, int end) {
        int cur = 0 , ans = 0 ;
        res[start]++;
        res[end]--;
        for(auto &i : res){
            cur +=  i.second;
            ans =  max(ans,cur);
        }
        return ans;
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(start,end);
 */