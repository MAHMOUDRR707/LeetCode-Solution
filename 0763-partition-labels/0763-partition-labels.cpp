class Solution {
public:
    vector<int> partitionLabels(string s) {
        map<char,int> res;
        for(int i  =0 ;i < s.size() ;i++){
            res[s[i]] = i;
        }
        int j  =0 , h = 0;
        vector<int> ans;
        for(int i  =0 ;i < s.size() ;i++){
            j = max(j,res[s[i]]);
            if(i == j){
                ans.push_back(i-h+1);
                h = i +1 ;
            }
        }
        return ans;
    }
};