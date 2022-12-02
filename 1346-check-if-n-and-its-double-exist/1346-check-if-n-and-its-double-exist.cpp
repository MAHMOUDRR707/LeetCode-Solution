class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int h =  count(arr.begin(),arr.end(),0);
        if(h > 1 ) return true;
        for(auto  &i : arr){
            if(find(arr.begin(),arr.end(),i*2) != arr.end() && i!=0 ) return true;
        }
        return false;
    }
};