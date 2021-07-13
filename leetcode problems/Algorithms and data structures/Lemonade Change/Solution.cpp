class Solution {
public:
    map<int,int> change;
    
    bool canChange(int need){
        while(need >= 20 && change[20] > 0){
            need -= 20;
            change[20]--;
        }
        while(need >= 10 && change[10] > 0){
            need -= 10;
            change[10]--;
        }
        while(need >= 5 && change[5] > 0){
            need -= 5;
            change[5]--;
        }
        return (need == 0);
    }
    
    
    bool lemonadeChange(vector<int>& bills) {
        int cur = 0;
        int length = bills.size();
        for(int i = 0  ; i < length ; i++){
            int need = bills[i] - 5;
            if(!canChange(need)){
                return false;
            }
            change[bills[i]]++;
        }
        return 1;
    }
};

//submission link: https://leetcode.com/submissions/detail/501667367/
