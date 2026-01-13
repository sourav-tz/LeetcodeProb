// LeetCode 121 - Best Time to Buy and Sell Stock
// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

package Arrays.mid;

class Solution {
    public int maxProfit(int[] prices) {
        int profit=0;
        int min=prices[0];
        int cost;
        for(int i=0;i<prices.length;i++){
            cost=prices[i]-min;
            profit=Math.max(profit,cost);
            min=Math.min(min,prices[i]);
        }
        return profit;
    }
}