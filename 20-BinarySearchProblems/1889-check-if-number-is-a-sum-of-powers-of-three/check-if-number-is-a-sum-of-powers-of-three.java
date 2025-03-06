class Solution {
    public boolean checkPowersOfThree(int n) {
       for(int i=15; i>=0; i--) {
        double pow = Math.pow(3,i);
        if(n > pow) n-=pow;
        else if(n==pow) return true;
       } return false;
    }
}