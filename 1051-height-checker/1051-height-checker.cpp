class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> res  = heights;
        int ans = 0;
        sort(res.begin(),res.end());
        for(int i =0 ; i < heights.size();i++){
            if(heights[i] != res[i]) ans++;
        }
        return ans;
    }
};