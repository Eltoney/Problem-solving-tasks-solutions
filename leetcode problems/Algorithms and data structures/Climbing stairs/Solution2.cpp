class Solution {
      int mem[50];
    int dp(int i){
        if(i == 1 || i == 0)
            return 1;
        int &ret = mem[i];
        
        if(ret != -1)
            return ret;
        
        ret = dp(i - 1) + dp(i - 2);
        return ret;
    }
    
public:
    int climbStairs(int n) {
          memset(mem , -1 , sizeof(mem));
        return dp(n);
    }
};
