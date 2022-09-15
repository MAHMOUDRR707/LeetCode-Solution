class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        map<int,int> res;
        vector<int> ans ;
        sort(changed.begin(),changed.end());
        reverse(changed.begin(),changed.end());
        for(auto &i : changed){
            if(!res[i*2]){
                res[i]+=1;
            }
            else {
                res[i*2] -= 1;
                ans.push_back(i);
            
        }
        }
        for(auto &i : res){
            if(i.second > 0 ) return {};
        }
        return ans;
    }
};