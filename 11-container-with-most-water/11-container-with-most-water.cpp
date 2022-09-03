class Solution {
public:
    int maxArea(vector<int>& h) {
        int l = 0 , r =  h.size()-1;
        long max_x = 0 ,x = 0 ;
        while(l!=r){
            x =  min(h[l],h[r])*(r-l);
            max_x = max(x,max_x);
            if(h[l] >   h[r])r--;
            else l++;
        }
        return max_x;
    }
};