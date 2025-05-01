class Solution {
    public int findNumbers(int[] nums) {
        int cnt = 0;
        for(int num : nums) {
            String st = String.valueOf(num);
            if(st.length() %2 ==0) {
                cnt++;
            }
        }
        return cnt;
    }
}