class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int ans =0;
        for(auto &i :  stones){
            if(find(jewels.begin(),jewels.end(),i) != jewels.end()) ans++;
        }
        return ans;
    }
};