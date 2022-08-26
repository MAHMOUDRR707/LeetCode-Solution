class Solution {
public:
    string repeat(string s, int n)
{
    string s1 = s;
 
    for (int i=1; i<n;i++)
        s += s1; 
 
    return s;
}
    string decodeString(string s) {
        vector<int> digits ; 
        vector<int> left ; 
        int i = 0 ;
        int x,y;
        string res = "";
        while(i < s.size()){
            if((isdigit(s[i])) && !(digits.size() >  left.size())){
                digits.push_back(i);
            }
            if(s[i] == '['){
                left.push_back(i);
            }
            if(s[i] == ']'){
                x = digits.back();
                y = left.back();
                digits.pop_back();
                left.pop_back();
                int k =  stoi(s.substr(x,y-x));
                res =  repeat(s.substr(y+1,i-y-1),k);
                s = s.substr(0,x) + res + s.substr(i+1);
                i =  x + res.size()-1;
                
            }
        i++;
        }
        return  s;
    }
};

                
