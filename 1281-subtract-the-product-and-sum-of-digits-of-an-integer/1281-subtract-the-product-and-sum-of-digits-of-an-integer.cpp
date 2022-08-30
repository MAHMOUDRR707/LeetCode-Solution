class Solution {
public:
    int subtractProductAndSum(int n) {
     string x =  to_string(n);
     long s =  0 ,a = 1;
     for(auto &i : x){
         s+= (i-'0');
         a *= (i-'0');
     }
        return a-s;
    }
};