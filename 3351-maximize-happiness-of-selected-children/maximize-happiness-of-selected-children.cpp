class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long maxi = 0;
        // vector<bool>visited(happiness.size(),false);
        sort(happiness.rbegin(),happiness.rend());
        for(int i=0; i<k; i++) {
            int sum = happiness[i]-i;
            if(sum > 0) {
                maxi+=sum;
            }
        }
        return maxi;
    }
};