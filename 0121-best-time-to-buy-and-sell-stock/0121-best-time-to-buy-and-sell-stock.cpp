class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxProfit = 0;
        int minProfit = INT_MAX;
        for (int i = 0; i < n; i++) {
            int price = prices[i];
            maxProfit = max(maxProfit, price - minProfit);
            minProfit = min(minProfit, price);
        }
        return maxProfit;
    }
};