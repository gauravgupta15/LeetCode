class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0,stock = prices[0];
        for(int i=1; i<prices.size(); i++) {
            if(stock > prices[i]) {
               stock=prices[i];
               cout <<"stocks : " <<stock <<endl;
            } else if(prices[i] - stock > 0){
                profit+=prices[i]-stock;
                stock=prices[i];
                cout << "stock: "<<stock <<" profit: "<<profit<<"prices: "<<prices[i]<<endl;
            }
        }
        return profit;
    }
};