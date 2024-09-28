class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=1 ,j=0,k=1;
        while(i<nums.size()) {
            if(nums[i] != nums[j]) {
                nums[k] = nums[i];
                k++;
                j++;
            }
            i++;
        }
        return k;
    }
};