class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> left ;
        vector<int>right;
        for(int i = 0 ;i<nums.size();i++){
            if(nums[i] % 2 == 0)left.push_back(nums[i]);
            else right.push_back(nums[i]);
        }
        int j = 0;
        for(int i = 0 ; i < nums.size();i+=2){
            nums[i] =  left[j];
            nums[i+1] =  right[j];
            j++;
        }
        return nums;
    }
};