class MapSum {
public:
    map<string,int> res;
    MapSum() {
        
    }
    
    void insert(string key, int val) {
        res[key] = val ;
    }
    
    int sum(string prefix) {
        int ans = 0;
        for(auto &i : res){
            int j ;
            for(j =0 ; j <  prefix.size() && j <i.first.size() ;j++){
                if(i.first[j] !=  prefix[j]) break;
            }
            
            if(j ==  prefix.size()) ans +=  i.second;
        }
        return ans;
    }
};

/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum* obj = new MapSum();
 * obj->insert(key,val);
 * int param_2 = obj->sum(prefix);
 */