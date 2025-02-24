class Solution {
    public int lengthOfLongestSubstring(String s) {
        Map<Character,Integer>mpp = new HashMap<>();
        int i=0;
        int j=0;
        int maxi = 0;
        while(j<s.length()) {
            char ch = s.charAt(j);
            mpp.put(ch, mpp.getOrDefault(ch,0)+1);
            while(mpp.get(ch) > 1 && i<=j) {
                mpp.put(s.charAt(i), mpp.getOrDefault(s.charAt(i),0)-1);
                i++;
            }

            maxi = Math.max(j-i+1, maxi);
            j++;
        }
        return maxi;
    }
}