class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n =  nums.size();
        int z[n];
        for(int i =0 ;i<n;i++){
            int index =  (k+i)%n;
            z[index] =   nums[i];
        }
        for(int i =0 ;i<n;i++){
            nums[i] = z[i] ;
        }
    }
};