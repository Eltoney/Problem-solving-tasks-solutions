class Solution {

    int n;
    int mem[1009];
    
    
    int dp(int i , vector<int> &cost){
        if(i > n)
            return 1e8;
        if(i == n)
            return 0;
        int &ret = mem[i];
        
        if(ret != -1){
            return ret;
        }
        int a = dp(i + 1 , cost) + cost[i];
        int b = dp(i + 2 , cost) + cost[i];
        ret = min(a , b);
        return ret;
    }
public:
    int minCostClimbingStairs(vector<int>& cost) {
        memset(mem , -1 , sizeof(mem));
        n = cost.size();
        int ans = min(dp(0 , cost) , dp(1 , cost));
        return ans;
    }
};
