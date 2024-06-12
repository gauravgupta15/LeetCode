class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mpp,check;
        for(auto it : arr) {
            mpp[it]++;
        }
        for(auto it : mpp) {
            check[it.second]++;
            if(check[it.second]>1) return false;
        }
        return true;


    }
};