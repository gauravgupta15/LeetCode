class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        int freq[26];
        for(char ch : t) {
            freq[ch - 'a']++;
        }
        for(char it : s) {
           freq[it - 'a']--;
        }
        for(int i : freq) {
            if(i!=0) return false;
        }
        return true;
    }
};