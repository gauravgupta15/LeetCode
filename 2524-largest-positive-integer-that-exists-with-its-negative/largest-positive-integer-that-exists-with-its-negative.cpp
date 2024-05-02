class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_map<int,int>mpp;
        int maxi = -1;
        for(int it : nums) {
            if(it < 0) {
                mpp[abs(it)]++;
            }
        }
        for(int it : nums) {
            if(it > 0) {
                if(mpp.find(it)!=mpp.end()) {
                    cout << it;
                    maxi=max(maxi,it);
                }
            }
        }
        return maxi;
    }
};