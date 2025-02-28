class Solution {
    public String longestCommonPrefix(String[] strs) {
        Arrays.sort(strs);
        int n = strs.length-1;
        String ans = "";
        StringBuilder sb = new StringBuilder();
       for(int i=0; i<strs[0].length(); i++) {
            if(strs[0].charAt(i) != (strs[n].charAt(i))) {
                 return sb.toString();
            }
           sb.append(strs[0].charAt(i));
        }
        return sb.toString();
    }
}