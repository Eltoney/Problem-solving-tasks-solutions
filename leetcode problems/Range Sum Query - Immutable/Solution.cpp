class NumArray {
    const int sz = 10009;
    
    vector<long long> cumSum;
public:
    NumArray(vector<int>& nums) {
        int dataLength = nums.size();
        
        for(int i = 0 ; i < dataLength ; i++){
            cumSum.push_back(nums[i]);
            if(i > 0)
                cumSum[i] += cumSum[i - 1];
        }
    }
    
    int sumRange(int left, int right) {
        long long high = cumSum[right];
        long long  low = 0;
        if(left != 0)
            low = cumSum[left - 1];
        return high - low;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
