class Solution {
    public int lengthOfLongestSubstring(String s) {
        
        Map<Character,Integer> mpp = new HashMap<>();
        int i = 0;
        int maxi= 0;

        for(int j = 0; j<s.length(); j++) {
            char chJ = s.charAt(j);
            mpp.put(chJ, mpp.getOrDefault(chJ, 0)+1);
            while(mpp.get(chJ) > 1) {
                System.out.println("i "+i+" j "+j);
                char chI = s.charAt(i);
                mpp.put(chI, mpp.getOrDefault(chI, 0) - 1);
                i++;
            }
            maxi = Math.max(j-i+1, maxi);
        }
        return maxi;
    }
}