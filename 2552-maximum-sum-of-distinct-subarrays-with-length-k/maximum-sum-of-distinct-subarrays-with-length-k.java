import java.util.HashMap;
import java.util.Map;

class Solution {
    public long maximumSubarraySum(int[] nums, int k) {
        if (k > nums.length) return 0; // Edge case

        Map<Integer, Integer> mpp = new HashMap<>();
        long sum = 0, maxi = 0; // Changed to long
        int i = 0;

        for (int j = 0; j < nums.length; j++) {
            mpp.put(nums[j], mpp.getOrDefault(nums[j], 0) + 1);
            sum += nums[j];

            if (j - i + 1 == k) {
                if (mpp.size() == k) { // Ensure all elements are unique in the window
                    maxi = Math.max(sum, maxi);
                }

                // Remove the leftmost element from the window
                int count = mpp.get(nums[i]);
                if (count > 1) {
                    mpp.put(nums[i], count - 1);
                } else {
                    mpp.remove(nums[i]);
                }
                sum -= nums[i];
                i++;
            }
        }
        return maxi;
    }
}
