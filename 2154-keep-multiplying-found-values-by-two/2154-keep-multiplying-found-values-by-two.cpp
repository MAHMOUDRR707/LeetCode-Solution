class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        while(1){
            if(find(nums.begin(),nums.end(),original) != nums.end()) original*= 2;
            else break;
        }
        return original;
    }
};