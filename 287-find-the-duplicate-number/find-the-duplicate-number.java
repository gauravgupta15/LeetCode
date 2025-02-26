class Solution {
    public int findDuplicate(int[] nums) {
        Map<Integer,Integer>mpp = new HashMap<>();
        for(int num : nums) {
            if(mpp.containsKey(num)) {
                return num;
            }
            mpp.put(num,mpp.getOrDefault(num,0)+1);
        }
        return 0;
    }
}