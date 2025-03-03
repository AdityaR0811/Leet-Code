
    /*
    Time complexity : O(n)
    Space complexity : O(1)
    */
    
    
    /*
    Additional Notes : None
    */

    
    //Two Pointer approach
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left = 0 , right = 1 , result = 0;
        while(left < prices.size() && right < prices.size()){
            result = max(result , prices[right] - prices[left]);
            if(prices[left] < prices[right]) right++;
            else {
                left = right;
                right++; 
            }
        }
        return result;
    }
};
    
    
    /*
    Author : AdityaR0811
    Question Link : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
    */
    
    