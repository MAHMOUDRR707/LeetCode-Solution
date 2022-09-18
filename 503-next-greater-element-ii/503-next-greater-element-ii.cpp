class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> stack;  
        int n  =  nums.size() ;
        vector<int> z(n,0);
        for (int i = 2*n-1 ;  i >= 0 ; i--){
            while (!stack.empty() && nums[stack.top()] <=  nums[i%n])
                stack.pop();
            if (stack.empty())
                z[i%n] = -1;
            else 
                z[i%n] = nums[stack.top()];
            stack.push(i%n);
            }
        return z;
    }
};