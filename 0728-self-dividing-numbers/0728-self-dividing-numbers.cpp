class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
      vector<int> ans; 
      for(int i =  left ; i <= right ;i++){
          string   x =  to_string(i);
          int count = 0;
          for(auto &j:x){
              if(j == '0' || i%(j-'0') != 0) break;
              else  count ++;
          }
          if(x.size() ==  count)  ans.push_back(i);
      }
        return ans;
    }
};