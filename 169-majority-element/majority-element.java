class Solution {
    public int majorityElement(int[] nums) {
     int freq=0;
     int ele = nums[0];
     for(int i : nums) {
        if(ele == i) freq++;
        else  freq--;
        if(freq == 0) {
            ele = i;
            freq=1;
        }
     }
     return ele;
    }
}