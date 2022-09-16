class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n =  score.size();
        map<int,int> res;
        vector<string> ans;
        vector<int > z =  score;
        sort(z.begin(),z.end());
        for(int i  = 0 ; i < n ;i++){
            res[z[i]] = i; 
        }
        
        for(auto &i : score){
            if(res[i] == n-1)ans.push_back("Gold Medal");
            else if(res[i] == n-2)ans.push_back("Silver Medal");
            else if(res[i] == n-3)ans.push_back("Bronze Medal");
            else  ans.push_back(to_string(n- res[i]));
        }
        return ans;
    }
};