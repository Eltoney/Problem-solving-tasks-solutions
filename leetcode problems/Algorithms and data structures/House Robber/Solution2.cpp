class Solution {
    int n;
    int mem[109];
    int dp(int i , vector<int>& nums){
        if(i >= n )
            return 0;
        int &ret = mem[i];
        
        if(ret == -1) { 
            int a = dp(i + 1 , nums);
            int b = dp(i + 2 , nums) + nums[i];
        
            ret = max(a , b);
        }
        
        return ret;
    }
    
public:
    int rob(vector<int>& nums) {
        n = nums.size();
        memset(mem , -1, sizeof(mem));
        
        return dp(0 , nums);
    }
};
