class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        int ans = 0;
        map<int,int> res;
        for(auto &i : tasks ){
            res[i]++;
        }
        for(auto [i,j] : res){
            if (j <2) return -1;
            if(j%3 == 0) ans += j/3;
            else  ans+= j/3+1;
        }
        return ans;
    }
};