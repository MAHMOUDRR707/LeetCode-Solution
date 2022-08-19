class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        map<int,int> ans ;
        for(int i = 0 ; i < numbers.size();i++){
            int sub =  target - numbers[i];
            if(ans[sub] != 0){
                return {ans[sub],i+1};
            }
            else{
                ans[numbers[i]] = i+1; 
            }
        }
        return {};
    }
};