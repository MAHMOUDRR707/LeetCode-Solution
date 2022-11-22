class Solution {
public:
    int integerReplacement(int n) {
        int ans = 0 ;
        while(n != 1){
            if(n%2 == 0) n/=2;
            else {
               
                if( n == INT_MAX ){
                    ans++;
                    n/=2;
                    n++;
                }
                else if((n+1)%4 ||n ==3 ) n--;
                else n++;
            }
            ans++;
        }
        return ans;
    }
};