class Solution {
    public int sumDivisibleByK(int[] nums, int k) {
        Map<Integer,Integer>mpp = new HashMap<>();
        int sum = 0;
       for (int num : nums) {
    mpp.put(num, mpp.getOrDefault(num, 0) + 1);
}
        for (Map.Entry<Integer, Integer> entry : mpp.entrySet()) {
            if(entry.getValue() % k == 0) {
                sum += (entry.getValue() * entry.getKey());
            }
        }
        return sum;
    }
}