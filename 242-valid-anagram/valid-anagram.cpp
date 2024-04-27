class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<char,int>mpp;
        for(char ch : t) {
            mpp[ch]++;
        }
        for(char it : s) {
            if(mpp.find(it)==mpp.end()) return false;
            mpp[it]--;
            if(mpp[it] == 0) mpp.erase(it);
        }
        return true;
    }
};