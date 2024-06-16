class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int>s1(nums1.begin(),nums1.end());
        set<int>s2(nums2.begin(),nums2.end());
        vector<int>a1;
        vector<int>a2;
        vector<vector<int>>ans;
        for(auto it : s1) {
            if(s2.find(it)==s2.end()) a2.push_back(it);
        }
        for(auto it : s2) {
            if(s1.find(it)==s1.end()) a1.push_back(it);
        }
        ans.push_back(a2);
        ans.push_back(a1);
        return ans;
    }

};