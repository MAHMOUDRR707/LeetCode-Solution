class Solution {
public:
    int hammingWeight(uint32_t n) {
        long nn =n ;
        string res =  helper(nn);

        int ans = 0;
        for(auto &i : res){
            if (i == '1'){
                ans++;
            }
        }
        return ans;
    }
    
    string helper(long n){
        string res ;
        while(n> 0){
            long x =  n/2;
            if(x*2 == n ){
                res+="0";
            }
            else{
                res+="1";
            }
            n =  x;
        }
        return res;
    }
};