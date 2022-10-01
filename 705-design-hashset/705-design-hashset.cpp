class MyHashSet {
public:
    set<int> res;
    MyHashSet() {
        
    }
    
    void add(int key) {
        res.insert(key);
    }
    
    void remove(int key) {
        res.erase(key);
    }
    
    bool contains(int key) {
        return find(res.begin(),res.end(),key) != res.end();
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */