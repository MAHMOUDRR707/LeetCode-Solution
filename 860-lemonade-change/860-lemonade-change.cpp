class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        map<int,int> res;
        res.insert(pair<int, int>(5, 0));
        res.insert(pair<int, int>(10, 0));
        res.insert(pair<int, int>(20, 0));
        for (auto &i: bills){  
          if(i == 5)res[i] +=1 ;
          else if(i == 10){
                if (res[5] == 0)return false;
          
           else{
                    res[5] -=1 ;
                    res[10] +=1;
           }
          }
            else{
                if (res[5] == 0 )return false;
                else if (res[10] == 0) {
                    if (res[5] < 3 ) return false; 
                    else  res[5] -=3;
                }
                else{
                    res[10] -= 1;
                    res[5] -= 1;
                }
            }
            }
        return true;
    }
};