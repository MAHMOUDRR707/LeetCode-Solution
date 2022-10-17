class Solution {
public:
    bool checkIfPangram(string sentence) {
        set<char>  res;
        for(auto &i: sentence) res.insert(i);
        return res.size() == 26;
    }
};