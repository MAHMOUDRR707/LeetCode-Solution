class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
     map<int,int> res ;
     res[0] = 1;
     int x = 0 ;
     int ans = 0;
     for(auto &i :  nums){
         x += i;
         if(res[x-k]) ans += res[x-k];
         if(!res[x]) res[x] =1;
         else res[x] +=1;
     }
     return ans;
    }
};