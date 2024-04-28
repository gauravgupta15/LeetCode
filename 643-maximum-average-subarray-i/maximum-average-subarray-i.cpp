class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double mx = INT_MIN;
        int left=0,right=0;
        double sum =0;
        double avg  =0;
        while(right < nums.size()) {
            sum+=nums[right];
            if(right-left+1 < k) right++;
            else if(right-left+1 == k) {
                 avg = sum/k;
                mx = max(avg,mx);
                sum-=nums[left];
                left++;
                right++;
            }
        }
        return mx;
    }
};