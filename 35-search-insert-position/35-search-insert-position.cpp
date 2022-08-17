class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int r =  nums.size();
        int l = 0 ;
        while(1){
            int mid = (l+r)/2;
            if (l ==  r){
                return l;
            }
    
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] >  target){
                r =  mid ;
            }
            else if(nums[mid] <  target){
                l = mid+1;
            }
        }
    }
};