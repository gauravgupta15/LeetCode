class Solution {
public:
    int rangeSum(vector<int>& nums, int m, int left, int right) {
        const int MOD = 1e9 + 7;
        long long sum = 0;
        int n=0;
        vector<int>preSum;
        preSum.push_back(nums[0]);
        for(int i=1; i<nums.size(); i++) {
            preSum.push_back(preSum[i-1]+nums[i]);
            n+=i;
        }
        n+= nums.size();
        int i=1,start = 0,j=1;
        int size = preSum.size();

        while(n>preSum.size()) {
            
            int check = nums.size()-j;
            // cout << check-size <<endl;
            if((check + size) == preSum.size()) { 
                start = i;
                size=preSum.size();
                // cout << start << endl;
                i++;
                j++;
            }
            preSum.push_back(abs(preSum[start] - preSum[i]));
            i++;
        }
        sort(preSum.begin(),preSum.end());
        cout << preSum.size();
        left--;
        right--;
        while(left <= right) {
            sum = (sum+preSum[left]) % MOD;
            left++;
        }
        return sum;

    
    }
};