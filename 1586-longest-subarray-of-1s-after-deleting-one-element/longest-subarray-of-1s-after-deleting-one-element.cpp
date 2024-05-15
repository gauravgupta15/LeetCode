class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int sum=0,cnt=0,i=0,j=0,maxi=0;
        while(j<nums.size()) {
            if(nums[j]==0) {
                cnt++;
            }
            if(cnt > 1) {
                while(nums[i] != 0) {
                    i++;
                    sum--;
                }
                if(nums[i] == 0) {
                    cnt--;
                    i++;
                }
            }
            if(nums[j] == 1) sum++;
            maxi = max(sum,maxi);
            j++;
        }
        if(cnt == 0) return maxi-1;
        return maxi;
    }
};