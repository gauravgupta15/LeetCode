class Solution {
    public int minimumRecolors(String blocks, int k) {
        int i=0;
        int j = 0;
        int num = 0;
        int mini = Integer.MAX_VALUE;

        while(j<blocks.length()) {
            if(blocks.charAt(j) == 'W') {
                num++;
            } 

            if(j-i+1 == k) {
                mini = Math.min(mini, num);
                if(blocks.charAt(i) == 'W') num--;
                i++;
                System.out.println(num);
            }
            j++;
        }
        return mini;
    }
}