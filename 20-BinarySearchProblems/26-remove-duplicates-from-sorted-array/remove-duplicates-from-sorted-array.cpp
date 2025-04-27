class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      int i=0,j=1,k=0;
      int cnt = 0;
      while(j<nums.size()) {
        if(nums[k] != nums[j]) {
            k++;
            swap(nums[k],nums[j]);
           
        } 
        j++;
      }
      return k+1;
    }
};