class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int ans = 1 , cnt = 1;
        int length = nums.size();
        for(int i = 1 ; i < length ; i++){
            if(nums[i - 1] < nums[i]){
                //cout<<nums[i - 1]<<" "<<nums[i]<<" "<<cnt<<endl;
                cnt++;
            }else{
                ans = max(ans , cnt);
                cnt = 1;
            }
        }
        ans = max(ans , cnt);
        return ans;
        
    }
};
