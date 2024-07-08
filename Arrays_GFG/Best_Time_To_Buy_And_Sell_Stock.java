class Solution {
    public int maxProfit(int[] prices) {
        int n = prices.length;
        int minimumCost = prices[0];
        int profit = 0;
        for (int i=1; i<n; i++) {
            int cost = prices[i] - minimumCost;
            profit = Math.max(cost, profit);
            minimumCost = Math.min(minimumCost, prices[i]);
        }
        return profit;
    }
}
