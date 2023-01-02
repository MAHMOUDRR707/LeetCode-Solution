class Solution {
public:
    bool detectCapitalUse(string word) {
        bool  m = true ,n = true,v = true;
        for(int i = 0 ;i <  word.size();i++){
            if(! isupper(word[i])){
                m = false;
                break;
            }
        }
        if (m) return true;
        
        for(int i = 0 ;i <  word.size();i++){
            if(isupper(word[i])){
                n = false;
                break;
            }
        }
        
        if (n) return true;
        
        if(!isupper(word[0])) v =  false;
        if(v){
            for(int i = 1 ; i < word.size();i++){
                if(isupper(word[i])) v =  false;
            }
        }
        if(v) return true;
        return false;
    }
};