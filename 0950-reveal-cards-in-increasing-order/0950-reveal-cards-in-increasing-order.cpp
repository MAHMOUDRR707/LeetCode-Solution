class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        int n =  deck.size();
        vector<int> ans(n,0);
        vector<int> index ;
        for(int i = 0 ;i < n;i++){
            index.push_back(i);
        }
        sort(deck.begin(),deck.end());
        for(auto &i: deck){
            ans[index[0]]  =  i;
            //cout << index[0];
            if(!index.empty()){
                index.erase(index.begin());
                index.push_back(index[0]);
                index.erase(index.begin());
            }
        }
        return ans;
    }
};