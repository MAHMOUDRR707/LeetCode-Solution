class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int area1 = (ax2 - ax1) * (ay2 - ay1);
        int area2 = (bx2-bx1)* (by2-by1);
        
        int l = max(ax1,bx1);
        int r = min(bx2,ax2);
        int x_ov = r -l ;
        
        int t = min(ay2,by2);
        int b = max(ay1,by1);
        int y_ov =  t -b ;
        
        if(y_ov > 0 && x_ov > 0)  return area1 + area2 -(x_ov *y_ov);
        
        return area1 + area2 ;
    }
};