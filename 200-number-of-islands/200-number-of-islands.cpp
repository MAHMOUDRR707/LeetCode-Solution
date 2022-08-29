class Solution {
public:
      
    void solve(int i,int j,int &m,int &n,vector<vector<char>> &v){
if(i<0 || j< 0 || i>= m || j>= n || v[i][j] == '0')return;
v[i][j] = '0';
solve(i+1,j,m,n,v);
solve(i,j-1,m,n,v);
solve(i,j+1,m,n,v);
solve(i-1,j,m,n,v);
}
int numIslands(vector<vector<char>>& arr) {
int ans = 0;
int i,j;
int m = arr.size(), n = arr[0].size();
for(i = 0; i < m; i++){
for(j = 0; j < n; j++){
if(arr[i][j] == '1'){
ans++;
solve(i,j,m,n,arr);
}
}
}
return ans;
    
        
        
    }


};