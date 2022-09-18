class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> res ;
        int count = 0 ;
        for(int i = 0 ; i <queries.size() ;i++){
            count = 0;
            int x = queries[i][0] , y = queries[i][1] , r = queries[i][2];
            for(int j = 0 ; j <  points.size() ;j++){
                int m =  points[j][0] , n = points[j][1] ;
                if(pow(x-m,2) + pow(y-n,2) <=  pow(r,2)) count++;
            }
            res.push_back(count);
        }
        return res;
    }
};