class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mpp;
        for(auto it : arr) {
            mpp[it]++;
        }
        vector<int>check;
        for(auto it : mpp) {
            check.push_back(it.second);
        }
        sort(check.begin(),check.end());
        for(int i=0;i<check.size()-1; i++) {
            if(check[i] == check[i+1]) return false;
        }
        return true;


    }
};