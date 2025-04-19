class Solution {
    public static int searchFirst(int[] nums, int target, int s, int e) {
        int ans = -1;
        while(s<=e) {
            int mid = s+(e-s)/2;

            if(nums[mid] == target) {
                ans = mid;
                s = mid+1;
            } else if(nums[mid] > target) {
                e = mid-1;
            } else {
                s = mid + 1;
            }
        }
        return ans;
    }
    public static int searchLast(int[] nums, int target, int s, int e) {
        int ans = -1;
        while(s<=e) {
            int mid = s+(e-s)/2;

            if(nums[mid] == target) {
                ans = mid;
                 e = mid-1;
            } else if(nums[mid] > target) {
                e = mid-1;
            } else {
                s = mid + 1;
            }
        }
        return ans;
    }
    
    public int[] searchRange(int[] nums, int target) {
        int s = 0;
        int e = nums.length-1;
        int[] ans = new int[2];
        ans[1] = searchFirst(nums, target, s, e);
        ans[0] = searchLast(nums, target,s ,e);
        return ans;
        
    }
}