class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
      int i=0,j=0,cnt=0;
      int maxi = 0;
      if(nums.size() <= k) return k;
      while(j<nums.size()) {
        
  
        if(nums[j] == 0 && k>=0) {
            k--;
        } 
        
            while(k < 0) {
                if(nums[i] == 0) {
                    k++;
                }
                i++;
            }
        maxi = max(maxi, j-i+1);
                j++;

      } return maxi;
    }
};