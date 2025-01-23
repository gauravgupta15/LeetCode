class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer,Integer> mpp = new HashMap<>();
        for(int i=0; i<nums.length; i++) {
            mpp.put(nums[i] , i);
        }
        for(int i=0; i<nums.length; i++) {
            int find = target - nums[i];
            if(mpp.containsKey(find) && mpp.get(find) != i) {
                return new int[] {i, mpp.get(find)};
            }
        }
        return new int[] {};
    }
}