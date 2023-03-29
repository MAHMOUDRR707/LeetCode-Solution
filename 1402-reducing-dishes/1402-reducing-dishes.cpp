class Solution {
public:
    int maxSatisfaction(vector<int>& ss) {
    int s = 0 ;
    int ans = 0;
    sort(ss.begin(),ss.end());
    for(int i = ss.size() -1 ; i >= 0 && s + ss[i] >0 ;i--){
        s += ss[i];
        ans += s;
    }
        return ans;
    }
};