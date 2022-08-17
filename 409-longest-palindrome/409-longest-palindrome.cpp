class Solution {
public:
    int longestPalindrome(string s) {
        set<int> res;
        int ans = 0;
        for(auto &i:s ){
            if(res.find(i) !=  res.end()){
                ans+=1;
                res.erase(i);
            }
            else{
                res.insert(i);
            }
        }
        
        if(res.empty()){
            return ans*2;
        }
        return  ans*2+1 ;
    }
};