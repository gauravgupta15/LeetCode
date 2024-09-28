class Solution {
    public int lengthOfLastWord(String s) {
        if(s.length() == 0) return 0;
        String[] str = s.trim().split("\\s+");
        int n = str.length;
        return str[n-1].length();
    }
}