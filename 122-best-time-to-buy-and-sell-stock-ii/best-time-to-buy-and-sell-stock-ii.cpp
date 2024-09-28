class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int buy = INT_MAX;
       int profit = 0;
       int maxi = 0;
       for(int i=0; i<prices.size(); i++) {
        if(buy > prices[i]) {
            buy = prices[i];
        }
        profit =  prices[i] - buy;
        cout << profit<<endl;
        if(profit > 0) {
            maxi+=profit;
            buy = prices[i];
        }
       }
       return maxi;
    }
};