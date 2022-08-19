class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        map<int,int> res;
        for(auto &i :  nums2){
            if(!res[i]){
                res[i] = 1;
            }
            else{
                res[i] += 1 ;
            }
        }
        for(auto &i :nums1){
            auto it =  find(nums2.begin(),nums2.end(),i);
            if(it !=  nums2.end() ){ 
               if(res[i] > 0 ){
                ans.push_back(i);
                res[i] -=1;
            }
        }
        }
        return ans;
    }
};