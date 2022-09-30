class Solution {
public:
    string defangIPaddr(string a) {
        string ans ="";
        for(auto &i : a){
            if(i == '.') {
                ans += "[.]";
            }
            else{
                ans+=i;
            }
        }
        return ans;
    }
};