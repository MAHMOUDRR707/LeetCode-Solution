#include<algorithm>
class Solution {
public:
    int longestBeautifulSubstring(string word) {
        int pointer = 1;
        int count = 1 ;
        int max_count = 0 ;
        for(int i = 1 ; i<word.size();i++){
            if(word[i] ==  word[i-1]){
                count +=1;
            }
            else if (word[i-1]<word[i]){
                count +=1 ;
                pointer +=1;
            }
            else{
                count = 1 ;
                pointer = 1 ;
            }
            if(pointer == 5 ){
                max_count =  max(count,max_count);
            }
        
        }
        return max_count;
    }
};