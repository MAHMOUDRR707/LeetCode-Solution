class Solution {
public:
    int bitwiseComplement(int n) {
        if(n == 0) return 1;
        string res = "";
        while(n >0){
            if(n%2 == 1) res +='1';
            else res+='0';
            n /= 2;
        }
        string h = "";
        for(auto  &i : res){
            if(i == '1') h += '0';
            else  h += '1';
        }
        int ans = 0;
        for(int i =0 ;i< h.size();i++){
            if(h[i] == '1') ans+= pow(2,i) ;
        }
        return ans;
    }
};