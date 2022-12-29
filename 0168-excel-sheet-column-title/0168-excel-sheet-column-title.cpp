class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans = "";
        int n = columnNumber;
        string al= "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        while(n >0 ){
            n-= 1;
            int k =  n%26;
            ans +=  al[k];
            n /= 26;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};