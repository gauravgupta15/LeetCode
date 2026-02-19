class Solution {
    public static void solve(List<List<Integer>>res, int[] nums,List<Integer>curr,int i) {
        if(i == nums.length) {
            System.out.println("base case: "+curr);
            res.add(new ArrayList<>(curr));
            return;
        }

        curr.add(nums[i]);
        System.out.println("Before: " +curr);
        solve(res,nums,curr,i+1);
        System.out.println("After 1: " +curr);
        curr.remove(curr.size()-1);
        solve(res,nums,curr,i+1);
        System.out.println("After 2: " +curr);
    }
    public List<List<Integer>> subsets(int[] nums) {
        List<List<Integer>> res = new ArrayList<>();
        List<Integer>curr = new ArrayList<>();

        solve(res,nums,curr,0);
        return res;
    }
}