class Solution {
public:
    int climbStairs(int n) {
        vector<int> res = {1,2};
        for(int i=2 ; i < n ;i++){
            res.push_back(res[i-2] + res[i-1]);
        }
        return res[n-1];
    }
};