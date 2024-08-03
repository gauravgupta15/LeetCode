class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int currZ=0;
        int window=0,minZ=0;
        for(int i : nums) {
            if(i==1) window++;
        }
        cout<<window;
        for(int i=0; i<window; i++) if(nums[i] == 0 ) currZ++;
        // cout << currZ;
        int n = nums.size();
        int start =0, end = window-1,mini = currZ;
        while(start < nums.size()) {
            if(nums[start] == 0) currZ--;
            start++;
            end++;
            cout << end%n << endl;
            if(nums[end%n]==0) currZ++;
            mini = min(mini, currZ);
        }
        return mini;
    }
};