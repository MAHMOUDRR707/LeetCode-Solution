class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
      
         
        stack<pair<int,int>> z;
        vector<int> ans(t.size(),0);
        for(int i = 0 ; i<t.size();i++){
            int num  =  t[i];
            int index = i ;
            while(!z.empty() && num > z.top().first){
                int j = z.top().first;
                int idx =z.top().second;
                z.pop();
                ans[idx] = index-idx;
            }
            z.push({num,index});
        }
        return ans;
    }
};