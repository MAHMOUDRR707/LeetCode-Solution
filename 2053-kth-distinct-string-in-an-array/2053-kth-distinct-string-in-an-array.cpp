class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int>  res;
        vector<string>  x;
        for(auto & i : arr){
            res[i]++;
        }
        
         for(auto & i : arr){
            if(res[i] == 1) x.push_back(i);
        }
        if(x.size()<k) return "";
        return x[k-1];
    }
};