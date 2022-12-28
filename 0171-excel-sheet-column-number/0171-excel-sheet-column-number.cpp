class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans = 0;
        for(auto &i:columnTitle){
            int res = i -'A' +1;
            ans = ans*26+res;
        }
        return ans;
    }
};