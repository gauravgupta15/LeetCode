class Solution {
    public List<Integer> majorityElement(int[] nums) {
        Map<Integer,Integer>mpp = new HashMap<>();
        List<Integer>ans = new ArrayList<>();
        for(int num : nums) {
            mpp.put(num,mpp.getOrDefault(num,0)+1);
            if(mpp.get(num) > nums.length / 3 && !ans.contains(num)) {
                ans.add(num);
            }
        }
        return ans;
    }
}