class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        int table[n + 2];
        table[0] = 0;
        table[1] = nums[0];
        nums.push_back(0);
        for(int i = 2 ; i <= n + 1 ;i++){
            table[i] = max(table[i - 1] , table[i - 2] +  nums[i - 1]);
        }
     
        return table[n + 1];
    }
};
