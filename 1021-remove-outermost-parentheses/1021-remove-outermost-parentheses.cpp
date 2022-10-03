class Solution {
public:
    string removeOuterParentheses(string s) {
        bool flag = false;
        string ans = "";
        stack<char> res;
        for(auto &i :s){
            if(!flag && i == '(') flag = true;
            else if(flag && i == '('){
                res.push('(');
                ans += '(' ; 
            }
            if(flag && i == ')' && !res.empty()){
                ans += ')';
                res.pop();
            }
            else if(flag && i == ')' && res.empty()){
                flag=  false;
            }
        }
        return ans;
    }
};