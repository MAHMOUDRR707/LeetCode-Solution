class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string f = "";
        string s = "";
        for(auto &i : word1)  f+=i;
        for(auto &i : word2)  s+=i;
        return s==f;
    }
};