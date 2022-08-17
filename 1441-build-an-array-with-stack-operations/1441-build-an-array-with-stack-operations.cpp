class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> res;
        auto x =  max_element(target.begin(),target.end());
        for(int i = 1 ;i<n+1;i++){
            if(find(target.begin(),target.end(),i) != target.end()){
                res.push_back("Push");
               
            }
            else{
                if(i < *x){
                res.push_back("Push");
                res.push_back("Pop");    
                }
                else{
                    break;
                }
                
            }
        }
        return res;
    }
};