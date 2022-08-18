class Solution {
public:
    int minSetSize(vector<int>& arr) {
        map<int,int> res;
        vector<int> ans;
        int count = 0 , answer =0  ;
        
        for(int i = 0 ; i<arr.size();i++){
            res[arr[i]]++;
            if((res[arr[i]]) >=arr.size()/2 ){
                return 1;
            }
        }
        
        for(auto &i : res){
            ans.push_back(i.second);
        }
        
        sort(ans.begin(),ans.end());
        
        for(int i = ans.size() -1 ;i>=0;i--){
            count++;
            answer += ans[i];
            if (answer >= arr.size()/2){
                return count;
            }
        }
        return 0 ;
    }
};