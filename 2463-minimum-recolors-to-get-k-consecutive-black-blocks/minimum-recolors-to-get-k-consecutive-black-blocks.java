class Solution {
    public int minimumRecolors(String blocks, int k) {
        int i=0,j=0,num=0,mini = Integer.MAX_VALUE;
        while(j<blocks.length()) {
            if(blocks.charAt(j) == 'W') num++;
            if(j-i+1 == k) {
                mini = Math.min(mini, num);
                if(blocks.charAt(i) == 'W') num--;
                i++;
            }
            j++;
        }
        return mini;
    }
}