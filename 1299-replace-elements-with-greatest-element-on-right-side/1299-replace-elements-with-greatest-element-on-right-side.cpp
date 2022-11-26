class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
      vector<int> ans (arr.size(),0);
      int mx =  arr[arr.size()-1];
      for(int i = arr.size() -1 ; i >0 ;i--){
          mx = max(mx,arr[i]);
          ans[i] = mx;
      }
     ans.erase(ans.begin());
     ans.push_back(-1);
     return ans;
    }
};