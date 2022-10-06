class TimeMap {
public:
    unordered_map<string,unordered_map<int,string>> res;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        res[key][timestamp] = value;
    }
    
    string get(string key, int timestamp) {
        
        if(!res.count(key)) return "";
        for(int i =  timestamp ; i >= 0 ; i--){
            if(res[key].count(i)){
                return res[key][i];
            }
        }
        return "";
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */