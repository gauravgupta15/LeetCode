class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      int i=0,j=1,k=1;
      int cnt = 0;
      while(k<nums.size()) {
        if(nums[k] != nums[i]) {
            swap(nums[k],nums[j]);
            i++;
            j++;
        } 
        k++;
      }
      return j;
    }
};