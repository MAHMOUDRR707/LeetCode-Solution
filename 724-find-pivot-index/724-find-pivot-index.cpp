class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int s = 0 ;
        int n =  nums.size();
        for(int i = 0 ; i<n;i++){
            s += nums[i];
        }
        
        int left =  0;
        for(int i =0 ;i<n;i++){
            if(left == s-left-nums[i]){
                return i ;
            }
            left  +=  nums[i];
        }
    return -1 ;
    }
};