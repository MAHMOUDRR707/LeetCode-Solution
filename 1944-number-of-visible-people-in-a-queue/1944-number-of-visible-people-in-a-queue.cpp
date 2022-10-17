class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& he) {
        vector<int> st ; 
        for(int i = he.size()-1;i >= 0 ; i--){
            int h =  he[i] , count = 0 ;
            while(!st.empty() && st.back() < h){
                count ++; 
                st.pop_back();
            }
            he[i] =  count + !st.empty(); 
            st.push_back(h);
        }
        return he;
    }
};