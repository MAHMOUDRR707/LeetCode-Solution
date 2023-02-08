class Solution {
public:
    int integerBreak(int n) {
        if(n<=3) return n-1;
        int n3 = n/3;
        int r3 =  n%3;
        if(r3 ==0 ) 
            return pow(3,n3);
        if(r3 == 1)
        {
            n3 -=1 ;
            r3 = 4;
        }    
        return r3*pow(3,n3);
    }
};