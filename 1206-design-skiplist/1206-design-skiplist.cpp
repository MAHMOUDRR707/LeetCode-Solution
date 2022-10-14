class Skiplist {
public:
    vector<int> res;
    Skiplist() {
        
    }
    
    bool search(int target) {
      return find(res.begin(),res.end(),target) != res.end() ;  
    }
    
    void add(int num) {
        res.push_back(num);
    }
    
    bool erase(int num) {
        if(search(num) == false) return false ;
        int t = 0 ;
        for(int i = 0 ; i < res.size();i++){
            if(res[i] ==  num){
                t = i ;
                break;
            }
        }
        res.erase(res.begin()+t);
        return true;
    }
};

/**
 * Your Skiplist object will be instantiated and called as such:
 * Skiplist* obj = new Skiplist();
 * bool param_1 = obj->search(target);
 * obj->add(num);
 * bool param_3 = obj->erase(num);
 */