class ParkingSystem {
    int b = 0 , m = 0 , s = 0;
public:
    ParkingSystem(int big, int medium, int small) {
        b = big;
        m = medium;
        s = small;
    }
    
    bool addCar(int carType) {
        if(carType == 1){
            if(b > 0){
                b--;
                return 1;
            }
        }else if(carType == 2){
            if(m > 0) {
                m--;
                return 1;
            }
            
        }else if(carType == 3){
            if(s > 0){
                s--;
                return 1;
            }
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
