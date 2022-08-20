#include<string>
class Solution {
public:
    int reverse(int x) {
        int flag = 0 ;
        
          if(x==INT_MIN)
        {
            return 0;
        }
          if(x<0)
        {
            x*=-1;
            flag=1;
        }
        string s=to_string(x);
        std::reverse(s.begin(),s.end());
        long ans=stol(s);
        if(flag)
        {
            ans*=-1;
            if(ans<INT_MIN)
            {
                ans=0;
            }
        }
        else
        {
            if(ans>INT_MAX)
            {
                ans=0;
            }
        }
        int a2=int(ans);
        return a2;
    }
        
    
};