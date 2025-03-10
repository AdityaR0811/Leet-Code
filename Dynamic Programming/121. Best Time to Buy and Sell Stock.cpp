
    /*
    Time complexity : O(n)
    Space complexity : O(n)
    */
    
    
    /*
    Additional Notes : None
    */

    
    // Dynamic Programming approach

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<vector<vector<int>>> dp(prices.size(),
         vector<vector<int>>(2, vector<int>(5, -1)));
        return func_profit(0,1,0,prices,dp);
    }

    int func_profit(int idx , int can_buy , int transactions , vector<int>& prices,
    vector<vector<vector<int>>>& dp)
    {
        if(idx == prices.size() || transactions > 1) return 0;
        if (dp[idx][can_buy][transactions]!=-1) return dp[idx][can_buy][transactions];
        int buy = -1e9,not_buy = -1e9,sell = -1e9,not_sell = -1e9;
        if(can_buy)
        {
            //buy case
            buy = func_profit(idx+1,0,transactions+1,prices,dp) - prices[idx];
            //not buy case
            not_buy = func_profit(idx+1,1,transactions,prices,dp);
        }
        else
        {
            //sell case
            sell = func_profit(idx+1,1,transactions+1,prices,dp) + prices[idx];
            //not sell case
            not_sell = func_profit(idx+1,0,transactions,prices,dp);
        } 
        return dp[idx][can_buy][transactions] = max(buy,max(not_buy,max(sell,not_sell)));
    }
};

    
    
    /*
    Author : AdityaR0811
    Question Link : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
    */
    
    