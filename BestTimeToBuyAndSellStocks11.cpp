class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        if(n==0)return 0;
        
        vector<int>dp(n,0);
        
        int ans=-prices[0];
        
        for(int i=1;i<n;i++){
            dp[i]=max(dp[i-1],ans+prices[i]);
            ans=max(ans,dp[i]-prices[i]);
        }
        
        return dp[n-1];
    }
};
