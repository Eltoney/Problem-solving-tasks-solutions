class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<pair<int,int>> numbers;
        for(int i = 0 ; i < nums.size() ; i++){
            numbers.push_back({nums[i] , i});
        }
        sort(numbers.begin() , numbers.end());
        int ans = 0 , rep = 1;
        nums[numbers[0].second] = 0;
        for(int i = 1 ; i < nums.size() ; i++){
            if(numbers[i].first != numbers[i - 1].first){
                ans +=rep;
                rep = 0;
            }
             nums[numbers[i].second] = ans;
            rep++;
        }
        return nums;
    }
};

// works for any size of nums as it works in nlog(n) not n^2 as the first one
