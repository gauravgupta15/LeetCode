class Solution {
    public List<Integer> findDuplicates(int[] nums) {
        List<Integer>duplicate = new ArrayList<>();
        HashSet<Integer>seen = new HashSet<>();
        for(int num : nums) {
            if(seen.contains(num)) {
                duplicate.add(num);
            }
            seen.add(num);
        }
        return duplicate;
    }
}