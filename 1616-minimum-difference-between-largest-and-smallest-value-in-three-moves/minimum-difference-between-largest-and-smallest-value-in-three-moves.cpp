class Solution {
public:
    

    int minDifference(vector<int>& nums) {
        if(nums.size()<=4) return 0;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i=0; i<nums.size(); i++) 
            return min({nums[n-2]-nums[2], nums[n-1]-nums[3],nums[n-4]-nums[0],nums[n-3]-nums[1]});
        return 0;
    }
};