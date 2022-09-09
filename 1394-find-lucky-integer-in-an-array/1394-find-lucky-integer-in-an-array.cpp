class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int> res;
        for(int i = 0 ;i < arr.size();i++){
            res[arr[i]]++;
        }
        int max_x =  -1 ;
        for(auto &i: arr){
            if(res[i] == i )
            max_x =  max(i,max_x);
        }
        return max_x;
    }
};