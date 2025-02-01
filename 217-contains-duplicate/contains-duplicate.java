class Solution {
    public boolean containsDuplicate(int[] nums) {
        HashMap<Integer,Integer>mpp = new HashMap<>();
        for(int num : nums) {
            mpp.put(num, mpp.getOrDefault(num, 0)+1);
        }
        // for(Map.Entry<Integer,Integer>entry : mpp.entrySet()) {
        //     if(entry.getValue() >= 2) {
        //         return true;
        //     }
        // }
        for(int value : mpp.keySet()) {
            if(mpp.get(value) >= 2) {
                return true;
            }
        }
        return false;
    }
}