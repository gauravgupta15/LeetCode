class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        unordered_map<int,int>mpp;
        for(int i : nums1) mpp[i]++;
        for(int i : nums2) {
            if(mpp.find(i)!=mpp.end()) {
                ans.push_back(i);
                mpp[i]--;
            }
            if(mpp[i] == 0) {
                mpp.erase(i);
            }
        }
        return ans;
    }
};