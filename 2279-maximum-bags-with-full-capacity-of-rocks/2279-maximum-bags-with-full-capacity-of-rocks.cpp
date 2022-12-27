class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int n =  rocks.size();
        vector<int> res(n);   
        int ans = 0;
        for(int i = 0 ; i <  n;i++){
            res[i] =  capacity[i] - rocks[i];
        }
        sort(res.begin(),res.end());
        for(int  i = 0 ; i < n ;i++){
            if(res[i] <= additionalRocks ){ 
                additionalRocks-= res[i];
                ans ++;
            }
            else break;
        }
        return ans;
    }
};