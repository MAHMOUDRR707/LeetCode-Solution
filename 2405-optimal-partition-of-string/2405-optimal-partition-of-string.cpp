class Solution {
public:
    int partitionString(string s) {
        string res= "" ;
        int ans  = 0;
        for(int i = 0 ;i <  s.size() ;i++){
            if(find(res.begin(),res.end(),s[i]) != res.end()){
                ans +=1 ;
                res ="";
            }
            res +=  s[i];
        }
        return ans+1;
    }
};