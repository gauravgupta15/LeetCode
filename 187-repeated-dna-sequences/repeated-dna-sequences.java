import java.util.*;

class Solution {
    public List<String> findRepeatedDnaSequences(String s) {
        List<String> repeated = new ArrayList<>();
        Map<String, Integer> map = new HashMap<>();
        
        // Traverse the string with a sliding window of size 10
        for (int i = 0; i <= s.length() - 10; i++) {
            String substring = s.substring(i, i + 10);
            
            // Put the substring into the map, count occurrences
            map.put(substring, map.getOrDefault(substring, 0) + 1);
            
            // If the count becomes 2, it means it's repeated (add it once)
            if (map.get(substring) == 2) {
                repeated.add(substring);
            }
        }
        
        return repeated;
    }
}
