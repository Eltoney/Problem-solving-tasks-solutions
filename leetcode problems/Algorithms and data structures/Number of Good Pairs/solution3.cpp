class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int,int> cnt;
        for(int i = 0 ; i < nums.size() ; i++){
            cnt[nums[i]]++;
        }
        int ans = 0;
        for(auto pr : cnt){
            ans += pr.second * (pr.second - 1) / 2;
        }
        return ans;
    }
};
