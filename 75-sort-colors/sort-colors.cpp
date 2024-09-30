class Solution {
public:
    void sortColors(vector<int>& nums) {
        int cntz=0,cntO=0,cntT=0;
       for(int i=0; i<nums.size(); i++) {
        if(nums[i] == 0) {
            cntz++;
        } else if(nums[i] == 1) cntO++;
        else cntT++;
       }
       for(int i=0; i<nums.size(); i++) {
        if(cntz) {
            nums[i] = 0;
            cntz--;
        } else if(cntO) {
            nums[i] = 1;
            cntO--;
        } else {
            nums[i] = 2;
            cntT--;
        }
       }

    }
};