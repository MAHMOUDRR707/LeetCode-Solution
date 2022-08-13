#include<algorithm>
class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n =  nums.size();
        bool x = false;
        vector<int> ans;
        int left = 0 ;
        int right = 0 ;
        for(int i = 0 ; i < n;i++){
            left += nums[i];
        }
        for(int i = n-1;i>=0;i--){
            left -= nums[i];
            if (left == right){
                x =  true;
                ans.push_back(i);
            }
            right +=  nums[i];
        }
    if(x){
        return *min_element(ans.begin(),ans.end());
    }
    return -1;
    }
};