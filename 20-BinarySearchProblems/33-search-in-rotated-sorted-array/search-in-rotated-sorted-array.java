class Solution {
    public static int pivotIndex(int[] nums, int target, int s, int e) {
        while(s < e) {
            int mid = s+(e-s)/2;
            if(nums[mid] >= nums[e]) s = mid+1;
            else e=mid;
        }
        return s;
    }
    public static int leftFind(int[] nums, int target, int s, int e) {
        while(s<=e) {
            int mid = s+(e-s)/2;
            if(nums[mid] == target) return mid;
            else if(nums[mid] > target) e = mid-1;
            else s = mid+1;
        }
        return -1;
    }
    public static int rightFind(int[] nums, int target, int s, int e) {
       while(s<=e) {
            int mid = s+(e-s)/2;
            if(nums[mid] == target) return mid;
            else if(nums[mid] > target) e = mid-1;
            else s = mid+1;
        }
        return -1;
    }

    public int search(int[] nums, int target) {
        int s = 0;
        int e = nums.length-1;
        int pivotInd = pivotIndex(nums,target,s,e);
        System.out.println("pivot: "+pivotInd);
        // find in left subarray:
        int leftFind = leftFind(nums,target,s,pivotInd);
        System.out.println(leftFind);
        if(leftFind >= 0) return leftFind;
        // find in right subarray:
        int rightFind = rightFind(nums,target,pivotInd,e);
        System.out.println(rightFind);
        if(rightFind >= 0) return rightFind;
        return -1;
    }
}