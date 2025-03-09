class Solution {
    public long maximumSubarraySum(int[] nums, int k) {
          Map<Integer,Integer>mpp = new HashMap<>();
        long sum=0,maxi=0;
        int i = 0;
        for(int j=0; j<nums.length; j++) {
                mpp.put(nums[j],mpp.getOrDefault(nums[j],0)+1);
                sum+=nums[j];
                // System.out.println(sum);
            if(j-i+1 == k) {
                if(mpp.size() == k)
                    maxi = Math.max(sum,maxi);
            //    System.out.println(mpp);
                int count = mpp.get(nums[i]);
                if(count > 1) {
                    mpp.put(nums[i], count-1);
                } else {
                    mpp.remove(nums[i]);
                }
                sum-=nums[i];
                i++;
            } 
        }
        return maxi;
    
    }
}