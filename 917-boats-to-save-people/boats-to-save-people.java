class Solution {
    public int numRescueBoats(int[] people, int limit) {
        int ans = 0;
        Arrays.sort(people);
        int i=0;
        int j=people.length-1;
        while(i<=j) {
            int rem_limit = limit - people[j];
            if(rem_limit >= people[i]) {
                i++;
            }
            ans++;
            j--;
        }
        return ans;
    }
}