class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> res ;
        vector<int> ans;
        for(auto &i : arr) res.push_back(i);
        sort(res.begin(),res.end());
        map<int,int>  h;
        int count = 0;
        for(auto &i: res){
            if (h.find(i) == h.end()){
                h[i] = count+1;
                count++;
            }
        }
        for(auto  &i: arr){
            ans.push_back(h[i]);
        }
        return ans;
    }
};