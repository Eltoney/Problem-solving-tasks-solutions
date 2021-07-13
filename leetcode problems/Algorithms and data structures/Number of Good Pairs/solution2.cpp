class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        vector<int> cnt(101 , 0);
        for(int i = 0 ; i  < nums.size() ; i++){
            cnt[nums[i]]++;
        }
        int ans = 0;
        for(int i = 1 ; i < 101 ; i++){
            ans += cnt[i] * (cnt[i] - 1) / 2;
        }
        return ans;
    }
};
