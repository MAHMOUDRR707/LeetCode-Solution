class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        int mid = n/2;
        vector<int> ans(n,0);
        vector<int>pos(mid);
        vector<int>neg(mid);
        int p = 0 , ne = 0;
        for(int i = 0 ; i < n;i++){
            if(nums[i] < 0) neg[ne++] = nums[i];
            else  pos[p++] = nums[i] ;
        }
        int  i = 0 ;
        p = 0 , ne = 0 ;
        while(i < n){
            ans[i++] = pos[p++];
            ans[i++] =  neg[ne++];
        }
        
      
     return ans;   
    }
};