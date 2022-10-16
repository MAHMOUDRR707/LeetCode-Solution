class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> res;
        map<int,int> z ;
        set <int> x ;
        for(auto &i : arr1) {
            z[i]++;
            x.insert(i);
        }
        vector<int> y ;
        for(auto &i :  arr2){
            if(find(x.begin(),x.end(),i) != x.end()){
                for(int j = 0 ; j <z[i];j++){
                    res.push_back(i);
                }
            }
           
            }
        for(auto &i : x ){
            if(find(res.begin(),res.end(),i) == res.end()){
                for(int j = 0 ; j <z[i];j++){
                    res.push_back(i);
            }
        }
        }
        return res;
    }
};