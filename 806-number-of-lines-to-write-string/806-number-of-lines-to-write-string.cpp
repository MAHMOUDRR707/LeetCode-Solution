class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int w= 0,l = 1;
        int y = 0;
        map<char,int> res;
        string z = "abcdefghijklmnopqrstuvwxyz";
        for(int i = 0 ;i < z.size();i++){
            res[z[i]] =  widths[i];
        }
        for(auto &i :s){
            int x = res[i];
            y += x;
            if(y >  100 ){
                l +=1;
                y =  x ;
            }
        }
        w =  y;
        return {l,w};
    }
};