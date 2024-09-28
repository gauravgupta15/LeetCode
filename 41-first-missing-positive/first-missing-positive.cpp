class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
       set<int>st(nums.begin(),nums.end());
       for(int i=1; i<1000000; i++) {
        if(st.find(i) == st.end()) return i;
       }
       return 0;
    
    }
};