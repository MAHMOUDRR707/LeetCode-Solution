class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int  n =  rooms.size();
        vector<bool> res(n,false);
        res[0] =  true;
        vector<int> ans = {0} ; 
        while (!ans.empty()){
            int node =  ans.back();
            ans.pop_back();
            for(auto &i : rooms[node]){
                if(!res[i]){
                    res[i] = true;
                    ans.push_back(i);
                }
            }
        }
        for(bool i: res)
        { 
            if(!i) return i ;
        }
        return true;
    }
};