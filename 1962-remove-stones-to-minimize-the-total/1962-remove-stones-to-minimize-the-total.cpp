class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
         priority_queue<int> heap(piles.begin(), piles.end());
        int ans = accumulate(piles.begin(), piles.end(), 0);
        
        for(int i =0 ; i< k ;i++){
            int cur = heap.top();
            heap.pop();
            int remove = cur/2 ;
            ans -= remove;
            heap.push(cur-remove);
        }
        return ans;
    }
};