class Solution {
public:
    int strStr(string h, string n) {
        int found =  h.find(n);
        if(found == -1 ){
            return -1;
        }
        return found;
        
    }
};