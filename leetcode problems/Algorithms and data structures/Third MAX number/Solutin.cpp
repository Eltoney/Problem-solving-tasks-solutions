class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int length = nums.size();
        set<int> st;
        for(int i = length - 1 ; i >= 0 ; i--){
            st.insert(nums[i]);
            if(st.size() == 3)
                return nums[i];
        }
        return nums[length - 1];
    }
};
