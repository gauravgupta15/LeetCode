class Solution {
public:
    bool isVowel(char ch) {
        return (ch=='a' || ch == 'e' || ch=='i' || ch == 'o' || ch == 'u');
    } 
    int maxVowels(string s, int k) {
       int i=0,j=0,maxi=0,cnt=0;
       while(j<s.length()) {
        if(isVowel(s[j])) {
            cnt++;
        } 
        if(j-i+1 < k) j++;
        else if(j-i+1 == k) {
            maxi = max(cnt, maxi);
            if(isVowel(s[i])) cnt--;
            i++;
            j++;
        }
       }
    return maxi;
    }
};