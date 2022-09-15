class Solution {
public:
    string reverseVowels(string s) {
        int start = 0 ,  end =  s.size() -1 ;
        while(start < end){
            while(start <  s.size() && !isvowels(s[start])){
            start++;
            }
            while(end > 0 && !isvowels(s[end])){
                 end--;
            }
            
            if(start < end) swap(s[start++],s[end--]);
        }
        return s;
    }
    
    bool isvowels(char c){
        return c == 'A' || c == 'a' || c == 'e' ||  c == 'o' || c == 'u' || c == 'E' ||  c == 'O' || c == 'U' || c == 'I' || c == 'i';
    }
};