#include <string>
#include <cctype>
#include <stdlib.h>
class Solution {
public:
    int evalRPN(vector<string>& t) {
        vector<int> stack;
        vector<int> num = {1,2,3,4,5,6,7,8,9};
        bool flag = false;
        for(auto &i : t){

            if(i == "+" || i == "-" || i == "/" || i == "*"){
                int x =  stack.back();
                stack.pop_back();
                int y =  stack.back();
                stack.pop_back();
                if(i == "+") stack.push_back(x+y);
                else if(i=="*") stack.push_back(y*x);
                else if(i == "-") stack.push_back(y-x);
                else stack.push_back(y/x);
            }
            else{
           stack.push_back(stoi(i));

            }
        }
        return stack.back();
    }
};