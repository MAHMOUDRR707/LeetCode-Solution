#include <bits/stdc++.h>
class Solution {
public:
    struct comp {
    template <typename T>
  
    // Comparator function
    bool operator()(const T& l,
                    const T& r) const
    {
        if (l.second != r.second) {
            return l.second > r.second;
        }
        return l.first < r.first;
    }
};
    string frequencySort(string s) {
      map<char,int> res;
      for(auto &i: s) res[i]++;
     set<pair<char, int>, comp> A(res.begin(),
                                   res.end());
      string ans ;
      for(auto &i : A){
          for(int  j = 0 ; j < i.second ;j++) ans += i.first;
      }
        return ans;
    }
};