class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& o, int m, int n) {
        vector<vector<int>>  res;
        reverse(o.begin(),o.end());
        int r =  o.size();
        if(n*m != r) return res;
        for(int i =0; i < m ; i++){
            vector<int> ans;
            for(int j = 0 ; j <  n ; j++){
                ans.push_back(o.back());
                o.pop_back();
            }
            res.push_back(ans);
        }
        return res;
    }
};