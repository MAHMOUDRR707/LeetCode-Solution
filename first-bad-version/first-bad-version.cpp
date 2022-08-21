// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long  l = 0 ;
        long r =  n;
        while(l<=r){
            long mid =  (l+r)/2;
            if(l==r){
                return l;
            }
            if(isBadVersion(mid) == true){
                r =  mid;
            }
            if(isBadVersion(mid) == false){
                l=  mid+1;
            }
        }
        return 0;
    }
};