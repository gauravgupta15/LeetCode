class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int maxi = numBottles;
        while(numBottles >= numExchange) {
            int ans = numBottles/numExchange;
            maxi+=ans;
            numBottles%=numExchange;
            numBottles+=ans;
        }
        return maxi;
    }
};