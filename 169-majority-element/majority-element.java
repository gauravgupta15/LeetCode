class Solution {
    public int majorityElement(int[] nums) {
       int freq = 0;
       int ele = nums[0];
        for(int i=0; i<nums.length; i++) {
            if(freq == 0) {
                ele = nums[i];
            }
            if(ele == nums[i]) {
                freq++;
            }
            else {
                freq--;
            }
        }
        return ele;
    }
}