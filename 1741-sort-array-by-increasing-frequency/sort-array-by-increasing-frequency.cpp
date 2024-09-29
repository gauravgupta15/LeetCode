class Solution {
public:
    bool sortlen(const pair<int,int>a,const pair<int,int>b) {
        return a.second > b.second;
    }
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(int it : nums) mpp[it]++;
        vector<pair<int,int>>freq(mpp.begin(),mpp.end());
        sort(freq.begin(),freq.end(),[]( pair<int,int>&a, pair<int,int>&b) {
            if (a.second == b.second) {
                return a.first > b.first; 
            }
            return a.second < b.second;
        });
        vector<int>ans;
        for(auto it : freq) {
            for(int i=0; i < it.second; i++) {
                ans.push_back(it.first);
            }
        }
        return ans;

        
        
    }
};