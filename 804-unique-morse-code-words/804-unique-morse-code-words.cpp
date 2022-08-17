class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> res =  {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string> ans;
        string letters = "abcdefghijklmnopqrstuvwxyz";
        for(int i =0 ;i <words.size();i++){
            string x ="";
            for(auto j :words[i]){
                int found =  letters.find(j);
                x += res[found];
                cout<<j;
            }
            ans.insert(x);
        }
        return ans.size();
        
    }
};