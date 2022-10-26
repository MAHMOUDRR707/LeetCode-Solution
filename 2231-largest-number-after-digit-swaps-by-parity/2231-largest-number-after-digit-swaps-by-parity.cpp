class Solution {
public:
    int largestInteger(int num) {
     vector<int> odd ;
     vector<int> even ;
     string s = to_string(num); 
     int n =  s.size();
     for(int  i =0 ; i < n ;i++){
         int dig =  s[i] - '0';
         if(dig%2 == 0) even.push_back(s[i]);
         else odd.push_back(s[i]);
     }
    sort(even.begin(),even.end());
    sort(odd.begin(),odd.end());
       string res ;
    for(int  i =0 ; i < n ;i++){
         int dig =  s[i] - '0';
         if(dig%2 == 0) {
             res += even.back();
             even.pop_back();
         }
         else {
             res += odd.back();
             odd.pop_back();
         }
     }
     int ans = stoi(res);
     return ans;
    }
};