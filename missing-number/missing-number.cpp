class Solution {
public:
    int missingNumber(vector<int>& nums) {
        for(int i = 0 ; i< nums.size()+1;i++){
            vector<int>::iterator it;
            it = find(nums.begin(),nums.end(),i);
            if (it == nums.end()) {
                return i;
            }
        }
        return  -1;
        
    }
};