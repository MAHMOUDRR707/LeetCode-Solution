class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int n =  nums1.size();
        int m =  nums2.size();
        int res[n+1][m+1];
        int  ans = 0;
        for(int i = 0 ; i <  n+1 ; i++){
            for(int  j = 0 ; j < m+1 ; j++){
                res[i][j] =  0;
            }}
        for(int i = 1 ; i <  n+1 ; i++){
            for(int  j = 1 ; j < m+1 ; j++){
                    if(nums1[i-1] == nums2[j-1]) {
                        res[i][j] = res[i-1][j-1]+1;
                        ans = max(ans,res[i][j]);
                    }          
            }
        }
         
        return ans;
    }
};