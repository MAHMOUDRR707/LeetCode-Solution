class Solution {
public:
    int res[26];
    int find(char x){
        return res[x] == x ? x : (res[x] = find(res[x]));
    }
    
    bool equationsPossible(vector<string>& equations) {
        for(int i = 0 ; i< 26 ;++i) res[i] = i;
        
        for(auto i :  equations){
            if(i[1] == '=') res[find(i[0] -'a')] = find(i[3] - 'a');
         }
        
        for(auto i : equations){
            if(i[1] == '!' && find(i[0] -'a') == find(i[3] -'a')) return false;
        }
        return true;
        
    }
};