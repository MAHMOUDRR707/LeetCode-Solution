class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> res1(n+1);
        vector<int> res2(n+1);
        for(auto &i : trust){
            res1[i[0]]++;
            res2[i[1]]++;
        }
         for(int i = 1 ; i <=n ;i++){
            if(res2[i] == n-1 && res1[i] == 0 ) return i;
        }
        return -1;
    }
};