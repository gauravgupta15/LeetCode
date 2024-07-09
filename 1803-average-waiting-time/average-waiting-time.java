class Solution {
    public double averageWaitingTime(int[][] customers) {
        double ans = 0;
        double cnt = 0;
        int chef = 0;
        for(int i=0; i<customers.length; i++) {
            if(chef < customers[i][0]) chef = customers[i][0];
            chef+=customers[i][1];
            ans+=(chef - customers[i][0]);
            cnt++;
        } return ans/cnt;
    }
}