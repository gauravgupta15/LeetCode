class Solution {
   public void swap(int[] nums, int i, int j) {
    int temp = nums[i];
    nums[i] = nums[j];
    nums[j] = temp;
}

public void sortColors(int[] nums) {
    int low = 0;
    int mid = 0;
    int high = nums.length - 1;
    while (mid <= high) {
        if (nums[mid] == 0) { // Check if the current element is 0
            swap(nums, low, mid); // Swap low and mid
            low++;
            mid++;
        } else if (nums[mid] == 1) { // If it's 1, just move mid forward
            mid++;
        } else { // If it's 2
            swap(nums, mid, high); // Swap mid and high
            high--;
        }
    }
}
}