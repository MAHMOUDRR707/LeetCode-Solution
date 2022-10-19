class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int ans = 0;
        for(auto &i : words){
            int x = 0;
            for(auto &j :  i){
                if(find(allowed.begin(),allowed.end(),j) != allowed.end()) x+=1;
            }
            if(x == i.size()) ans+=1;
        }
        return ans;
    }
};