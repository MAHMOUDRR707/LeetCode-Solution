class Solution {
public:
    int findComplement(int num) {
        string res = "";
        while(num > 0){
            if(num%2 == 0) res+= '0';
            else res +='1';
            num /=2;
        }
        string helper = "";
        for(auto &i : res){
            if(i == '0') helper += '1';
            else helper += '0';
        }
        int ans = 0 ;
        for(int i = 0; i < res.size();i++){
            if(helper[i] == '1')ans += pow(2,i);
        }
        return ans;
    }
};