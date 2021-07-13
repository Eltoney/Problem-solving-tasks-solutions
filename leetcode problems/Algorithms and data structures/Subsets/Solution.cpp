class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> subs;
        int length = nums.size();
        int mxNumber = (2 << (length - 1));
        for(int i = 0 ; i < mxNumber ; i++){
            vector<int> cur;
            for(int j = 0 ;  j < length ; j++){
                if((i >> j) & 1) {
                    cur.push_back(nums[j]);
                }
            }
            subs.push_back(cur);
        }
        return subs;
    }
};

//submission link: https://leetcode.com/submissions/detail/501385490/
