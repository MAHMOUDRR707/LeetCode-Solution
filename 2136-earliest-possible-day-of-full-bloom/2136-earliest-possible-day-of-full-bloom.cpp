class Solution {
public:
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        vector<int> indices(plantTime.size());
        iota(indices.begin(), indices.end(), 0);
        sort(indices.begin(), indices.end(),
             [&](int i, int j) { return growTime[i] > growTime[j]; });
        int res = 0 , ans = 0 ;
        for(auto &i : indices ){
            res +=  plantTime[i];
            ans  = max(ans ,  res+growTime[i] );
        }
        return ans;
    }
};