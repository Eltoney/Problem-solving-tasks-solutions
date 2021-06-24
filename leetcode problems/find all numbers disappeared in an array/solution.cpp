class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        vector<int> found(nums.size() + 1);
        for(int i = 0 ; i < nums.size() ; i++){
            found[nums[i]] = 1;
        }
        for(int i = 1 ; i <= nums.size() ; i++){
            if(!found[i])
                ans.push_back(i);
        }
        return ans;
    }
};
