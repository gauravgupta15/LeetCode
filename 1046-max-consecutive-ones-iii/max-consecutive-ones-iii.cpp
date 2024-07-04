class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
       int i=0;
       int maxi=0;
       if(nums.size() == k) return k;
       for(int j=0; j<nums.size(); j++) {
        if(k >= 0 && nums[j] == 0 ) k--;
        while(k<0) {
            if(!nums[i]) k++;
            i++;
        }
         maxi = max(maxi,j-i+1);
       }

       return maxi;
    }
};