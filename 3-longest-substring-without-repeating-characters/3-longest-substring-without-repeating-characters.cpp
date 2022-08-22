class Solution {
public:
   int lengthOfLongestSubstring(string s) {
    int a[256]={0};// Create an array
        int l=0;    //Left value point in array
        int m=0;    //Max value initialise
        int r=0;    //Right Value point in array
        while(r<s.length()){    //Till right value is not equal to array's length
            a[int(s[r])]++;     //Incrementing integer arrrays val
            while(a[int(s[r])]>1){  //When 2 occurence of a given character occurs we try to remove,
                a[int(s[l])]--;     //the first occurence in left
                l++;
            }
            m=max(m,r-l+1);     //Finding the max 
            r++;  
            }
        return m;
    }
    
};