class Solution {
public:
    int bulbSwitch(int n) {
        if(n == 0) return 0;
        int res = 1;
        while(res*res <= n){
            res++;
        }
        return res-1;
    }
};