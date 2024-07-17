class Solution {
    public int maxProfit(int[] prices) {
         int profit = 0;
         int buy = 10000000,ans=0,maxi=0,flag=0;
         for(int i=0; i<prices.length; i++) {
            if(buy > prices[i]) {
                buy = prices[i];
            }
            System.out.println(buy);

            profit=prices[i] - buy;
            if(maxi < profit) {
                maxi = profit;
            }
         }
        return maxi;
    }
}