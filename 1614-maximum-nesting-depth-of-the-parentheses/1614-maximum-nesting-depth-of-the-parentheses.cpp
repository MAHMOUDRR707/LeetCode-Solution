class Solution {
public:
    int maxDepth(string s) {
        int count = 0 ;
        vector<int> res;
        for(auto &i : s){
            if(i == '(') count++;
            else if (i == ')')  {
                res.push_back(count);
                count--;
            }
        }
        if(res.empty()) return 0;
        return *max_element(res.begin(),res.end());
    }
};