class Solution {
    public int maxProfit(int[] prices) {
        int buy = Integer.MAX_VALUE,maxi = 0;
        for(int i = 0; i<prices.length; i++) {
            buy = Math.min(prices[i], buy);
            int profit = prices[i] - buy;
            maxi = Math.max(maxi,profit);
        } return maxi;
    }
}