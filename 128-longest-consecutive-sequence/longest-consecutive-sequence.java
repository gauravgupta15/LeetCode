class Solution {
    public int longestConsecutive(int[] nums) {
        if(nums.length < 2) return nums.length;
        int count = 1;
        int maxi = 1;
        PriorityQueue<Integer>minH = new PriorityQueue<>();
        for(int num : nums) {
            minH.add(num);
        }




        int current = minH.peek();
        minH.poll();
        while(!minH.isEmpty()) {
            int next = minH.peek();
            //--------y
            if( next == current + 1 ){
                count ++ ; 
                //pop the elementt 
                minH.poll();
            }else{
                if( next == current ){
                    
                    minH.poll();

                }else{
                    count=1;
                minH.poll();
                    
                }
            }
            current = next;
            maxi = Math.max(maxi,count);
        }
        return maxi;
    }
}