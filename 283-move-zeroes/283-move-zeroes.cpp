class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> res;
        int count = 0 ;
        for(int i  =0 ;i < nums.size();i++){
            if(nums[i] == 0 ){
                count ++;
            }
            else{
                res.push_back(nums[i]);
            }
        }
        for(int i =0 ; i < count ;i++){
            res.push_back(0);
        }
        for(int i= 0 ;i < nums.size() ;i++){
            nums[i] = res[i] ;
        }
    }
};