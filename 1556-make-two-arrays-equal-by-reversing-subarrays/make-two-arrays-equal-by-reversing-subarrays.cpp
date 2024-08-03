class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        unordered_map<int,int>mpp;
        for(int i : target) mpp[i]++;
        for(int i : arr) {
            if(mpp.find(i) != mpp.end() && mpp[i] > 0) mpp[i]--;
            else return false;
        } return true;
    }
};