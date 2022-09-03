class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& f, vector<vector<int>>& s) {
     int n =  s.size();
     int m =  f.size() ;
     int i  = 0 ,j=0;
    vector<vector<int>> res;
    while(i<n && j < m ){
        int x =  max(s[i][0],f[j][0]);
        int y =  min(s[i][1],f[j][1]);
        
        if(y>=x ){
            res.push_back({x,y});
        }
        if(s[i][1]>f[j][1]) j++;
        else i++;
    }
        return res;
    }
};