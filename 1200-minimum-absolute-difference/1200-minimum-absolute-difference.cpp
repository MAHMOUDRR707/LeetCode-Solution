class Solution {
public:
      bool cmp(pair<int,vector<vector<int>>>& a,
         pair<int,vector<vector<int>>>& b)
{
    return a.first < b.first;
}
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
    vector<vector<int>>  ans;
    sort(arr.begin(),arr.end());
    int min = INT_MAX;
      for (int i =0 ;i < arr.size()-1;i++){
          int j =  i+1;
          int x = arr[j] - arr[i];
            if(x<min)
            {
            min = x;
            ans.clear();
            ans.push_back({arr[i],arr[j]});
            }
            else if(arr[j]-arr[i]==min)
                ans.push_back({arr[i],arr[j]});
          
      }
        return ans;
    }
  
};