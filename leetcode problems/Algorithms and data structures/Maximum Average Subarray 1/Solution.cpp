class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double bestAverage = -1e10;
        double curAverage = 0;
        double curSum = 0;
        int id = 0;
        for(int i = 0 ; i < k ;i++){
            curSum += nums[i];
        }
        
        curAverage = curSum / k;
        bestAverage = max(bestAverage , curAverage);
        
        for(int i = k ; i < nums.size() ; i++){
            curSum -= nums[id++];
            curSum += nums[i];
            curAverage = curSum / k;
            bestAverage = max(bestAverage , curAverage);
        }
        return bestAverage;
    }
};
