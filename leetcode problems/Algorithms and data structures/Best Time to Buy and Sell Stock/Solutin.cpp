class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int mnPriceSofar = 1e6;
        for(int i = 0 ; i < prices.size() ; i++){
            mnPriceSofar = min(mnPriceSofar , prices[i]);
            profit = max(profit , prices[i] - mnPriceSofar);
        }
        return profit;
    }
};
