class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int mxSum = INT_MIN;
        int mxSofar = 0;
        int n = nums.size();
        for(int i = 0 ; i < n ; i++){
            mxSofar = max(nums[i] , mxSofar + nums[i]);
            mxSum = max(mxSum , mxSofar);
        }
        return mxSum;
    }
};
