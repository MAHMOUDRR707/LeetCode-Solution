class Solution {
public:
    vector<bool> camelMatch(vector<string>& queries, string pattern) {
        vector<bool> res;
        string y ="";
       
        cout<<y;
        for(auto &q : queries){
             size_t i=0,j=0;
            while(i<q.size() and j<pattern.size()) {
                if(q[i]==pattern[j]) ++j;
                else if(isupper(q[i])) break;
                ++i;
            }
            if(j<pattern.size()) {
                res.push_back(false);
                continue;
            }
            while(i<q.size())
                if(isupper(q[i++]))
                    break;
            res.push_back(i<q.size()?false:true);
        }
        return res;
    }
};