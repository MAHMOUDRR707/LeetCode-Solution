class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int ans =0 ;
       for(auto &i : words){
        size_t found = i.find(pref);
           if(found == 0) ans++;
       }   
        return ans;
    }
};