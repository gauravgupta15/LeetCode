import java.util.*;

class Solution {
    public boolean isAnagram(StringBuilder sb, String s) {
        // Check length
        if (sb.length() != s.length()) return false;

        // Create frequency arrays for sb and s
        int[] freqSb = new int[26];
        int[] freqS = new int[26];

        // Count frequency for sb
        for (int i = 0; i < sb.length(); i++) {
            freqSb[sb.charAt(i) - 'a']++;
            freqS[s.charAt(i) - 'a']++;
        }

        // Compare frequency arrays
        return Arrays.equals(freqSb, freqS);
    }

    public List<Integer> findAnagrams(String s, String p) {
        List<Integer> list = new ArrayList<>();
        int i = 0;
        int size = p.length();
        StringBuilder sb = new StringBuilder();

        // Sliding window
        for (int j = 0; j < s.length(); j++) {
            char ch = s.charAt(j);
            sb.append(ch);

            // Once window reaches the size of p
            if (sb.length() == size) {
                // Check if current window is an anagram
                if (isAnagram(sb, p)) {
                    list.add(i);
                }
                // Shrink window from the left
                sb.deleteCharAt(0);
                i++;
            }
        }
        return list;
    }
}
