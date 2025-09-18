class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        

       vector<int> bestbuy(n);
        bestbuy[0] = prices[0]; 
        for (int i = 1; i < n; i++) {
            bestbuy[i] = min(bestbuy[i-1], prices[i]);
        }

        int maxprofit = 0;
        for (int i = 0; i < n; i++) {
            int currprofit = prices[i] - bestbuy[i];
            maxprofit = max(maxprofit, currprofit);
        }

        return maxprofit;
    }
};
