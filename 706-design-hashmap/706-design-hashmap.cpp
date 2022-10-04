class MyHashMap {
public:
    map<int,int> res;
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        res[key] = value;
    }
    
    int get(int key) {
        for(auto &i : res){
            if(i.first == key) return res[key];
        }
        return -1;
    }
    
    void remove(int key) {
        res.erase(key);
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */