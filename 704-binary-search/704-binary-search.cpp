class Solution {
public:
    int search(vector<int>& nums, int target) {
    
      return binary(nums,0,nums.size(),target);
    }
    int binary(vector<int> nums , int l , int r , int target){
        int mid =  l +(r-l)/2;
        if(r>l){
        if (nums[mid] == target){
            return mid;
        }
        
        else if(nums[mid] > target){
            return binary(nums,l,mid,target);
        }
        
        else if (nums[mid] < target){
            return binary(nums,mid+1,r,target);
        }
        
        }
        return -1 ;    
    }
};
   
   

        
       
   