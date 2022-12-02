class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        map<int,int>  res;
        for(auto  &i : arr){
            res[i]++;
        }
        int ans = 0;
        int h = 0; 
        for(auto &i :res){
            if(i.second > h)  {
                ans = i.first;
                h =  i.second; 
                }
        }
        return ans;
    }
};