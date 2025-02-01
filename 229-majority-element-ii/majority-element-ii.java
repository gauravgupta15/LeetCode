class Solution {
    public List<Integer> majorityElement(int[] nums) {
        int n = nums.length/3;
        List<Integer>list = new ArrayList<>();
        HashMap<Integer,Integer>mpp = new HashMap<>();
        for(int num : nums) {
                mpp.put(num, mpp.getOrDefault(num,0)+1);
            if(mpp.containsKey(num) && mpp.get(num) > n && !list.contains(num)) {
                list.add(num);
            }
        }
        return list;
    }
}