class Solution {
public  : 
    vector<string> res;
public:
    vector<string> letterCasePermutation(string s) {
        helper(s,0);
        return res;
        
    }
    
    void helper(string s , int pos){
    if(s.size() ==  pos){
        res.push_back(s);
        return;
    }
    helper(s,pos+1);
    if(s[pos] >= '0' &&  s[pos] <= '9'){
        return ;
    }
    if(s[pos] >= 'A' &&  s[pos] <= 'Z'){
            s[pos] = 'a' + s[pos] - 'A';
    }
    else{
            s[pos] = 'A' + s[pos] - 'a';
    }
    helper(s,pos+1);
    }
};