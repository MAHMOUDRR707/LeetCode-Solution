class Solution {
public:
    int maximum69Number (int num) {
        string x =  to_string(num);
        vector<char> res;
        for(auto &i : x) res.push_back(i);
        for(int i = 0 ; i <  res.size() ; i++){
            if(res[i] == '6') {
                res[i] = '9';
                break;}
        }
        string ans = "";
        for(auto &i : res) ans+= i;
        return stoi(ans);
        
    }
};