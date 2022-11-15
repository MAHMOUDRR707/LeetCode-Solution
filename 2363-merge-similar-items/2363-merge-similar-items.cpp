class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
    map<int,int> h1 ; 
    for(int i = 0 ;  i <  items1.size();i++){
        h1[items1[i][0]] = items1[i][1];
    }
    for(int i = 0 ;  i <  items2.size();i++){
        if(h1.find(items2[i][0]) !=h1.end()){
            h1[items2[i][0]] += items2[i][1];
        }
        else{
            h1[items2[i][0]] = items2[i][1];
        }
    }
    vector<vector<int>> res;
        for(auto  &i : h1){
            res.push_back({i.first,i.second});
        }
        return res;
    }
};