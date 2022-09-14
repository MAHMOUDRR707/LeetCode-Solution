class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int x = 1 ,  y = 1 ;
        vector<int> res;
        int n =  nums.size();
        for(int i = 0 ; i<n;i++){
            x *= nums[i];
            y *= nums[n-1-i];
            res.push_back(x);
            res.push_back(y);
            if (x == 0) x = 1;
            if(y==0)y = 1;
        }
        
        return *max_element(res.begin(),res.end());
    }
};