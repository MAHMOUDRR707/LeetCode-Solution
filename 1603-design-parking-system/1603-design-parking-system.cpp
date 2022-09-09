class ParkingSystem {
public : 
    vector<int> res;
public:
    ParkingSystem(int big, int medium, int small) {
        res.push_back(big);
        res.push_back(medium);
        res.push_back(small);
    }
    
    bool addCar(int carType) {
        
        if (res[carType -1 ] >0){
            res[carType -1 ] -= 1 ;
            return true;
        }
        return false;
        
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */