class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int number_of_items = prices.size();
        if(number_of_items == 0)return 0;
        
        vector<int> dp(n,0);
        
        int ans = -prices[0];
        
        for(int i=1; i<number_of_items; i++){
            dp[i] = max(dp[i-1], ans + prices[i]);
            ans = max(ans, dp[i] - prices[i]);
        }
        
        return dp[number_of_items-1];
    }
};
