class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> ans = {0} ;
        int s = 0 ;
        for(auto &i : gain) {
            s += i; 
           ans.push_back(s);
        }
        return *max_element(ans.begin(),ans.end());
    }
};