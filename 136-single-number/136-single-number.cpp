class Solution {
public:
    int singleNumber(vector<int>& nums) {
        for(auto &i :nums){
            int it = count(nums.begin(),nums.end(),i);
            if(it == 1 ){
                return i;
            }
        }
        return 0;
        
    }
};