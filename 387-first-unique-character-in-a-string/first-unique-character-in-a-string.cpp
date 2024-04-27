class Solution {
public:
    int firstUniqChar(string s) {
        int arr[27];
        for(int i=0; i<s.length();i++) {
            arr[tolower(s[i])-'a'+1]++;
        }
        for(int i=0; i<s.length(); i++) {
            if(arr[tolower(s[i])-'a'+1] == 1) return i; 
        }
        return -1;
    }
};