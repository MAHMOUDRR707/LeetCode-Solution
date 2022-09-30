class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        if(nums.size()%k !=  0) return false;
        map<int,int> res;
        sort(nums.begin(),nums.end());
        for(int i = 0; i< nums.size();i++){
            res[nums[i]]++;
        }
        
         for(int i = 0; i< nums.size();i++){
            if(res[nums[i]] == 0) continue;
            res[nums[i]]--;
             
            for(int j = 1;j < k;j++){
                if(res[nums[i]+j] ==0) return false;
                res[nums[i]+j]--;
            }
        }
                    return true;
    }
};