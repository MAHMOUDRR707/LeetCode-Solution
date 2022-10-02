class Solution {
public:
    int numRollsToTarget(int n, int k, int target) {
        int m =  pow(10,9)+7;
        vector<vector<int>> res(n+1,vector<int>(target+1,0));
        res[0][0]= 1;
        for(int i = 1 ; i <= n;i++){
            for(int j = 1 ; j <= target;j++){
                int ans = 0;
                for(int l =1 ; l <= k ;l++){
                    if(j-l >=0)ans = (ans+(res[i-1][j-l]%m))%m;
                }
                res[i][j] = ans%m;
            }
        }
            
        return res[n][target];    
            
    }
};