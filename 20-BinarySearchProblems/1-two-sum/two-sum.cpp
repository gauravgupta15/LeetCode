class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mpp;
        vector<int>x;
        for(int i=0;i<nums.size(); i++) mpp[nums[i]]=i;
       for(int i = 0; i<nums.size(); i++) {
        int find = target - nums[i];
        if(mpp.find(find) != mpp.end() && mpp[find] != i) {
            return {i, mpp[find]};
        }
       }
        return {};
    }
};