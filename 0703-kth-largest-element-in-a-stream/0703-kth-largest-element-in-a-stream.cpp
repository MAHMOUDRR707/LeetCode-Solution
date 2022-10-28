class KthLargest {
public:
       priority_queue<int, vector<int>, greater<int>>  res;
    int ans ;
    KthLargest(int k, vector<int>& nums) {
        ans = k;
        for(auto  &i :  nums){
            if(ans >= res.size()) res.push(i);
            if(ans <  res.size()) res.pop();
        }
    }
    
    int add(int val) { 
        if(ans >= res.size()) res.push(val);
        if(ans <  res.size()) res.pop();
        return res.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */