class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
     sort(nums.begin(),nums.end());
    vector<int> ans;
    for(auto &i : queries){
        int count = 0 ;
        for(auto  &j: nums){
            if(j <=  i ){
                i -= j;
                count ++;
            }
            else break;
        }
          ans.push_back(count);
    }
      return ans;
    }
};