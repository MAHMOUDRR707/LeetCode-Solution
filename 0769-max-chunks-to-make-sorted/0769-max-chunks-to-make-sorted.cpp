class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int max_x = 0;
        int ans = 0;
        
        for(int i = 0 ;i < arr.size();i++){
            max_x =  max(max_x,arr[i]);
            if(max_x == i) ans +=1;
        }
        return ans;
    }
};