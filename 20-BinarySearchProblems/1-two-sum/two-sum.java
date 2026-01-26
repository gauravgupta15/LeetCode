class Solution {
    public int[] twoSum(int[] nums, int target) {
       int[] arr = new int[2];
       LinkedHashMap<Integer,Integer>mpp = new LinkedHashMap<>();

       for(int i=0;i< nums.length;i++) {
            mpp.put(nums[i],i);
       }
    
       for(int i=0;i< nums.length;i++) {
            int t = target;

            if(mpp.containsKey(t - nums[i]) && mpp.get(t - nums[i]) != i) {
                arr[0] = i;
                arr[1] = mpp.get(t - nums[i]);
                return arr;
            }
       }
       return arr;
    }
}