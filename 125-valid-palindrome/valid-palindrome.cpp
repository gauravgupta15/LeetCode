class Solution {
public:
    bool isPalindrome(string s) {
        int i=0,j=s.length()-1;
        while(i<j) {
            char start = tolower(s[i]);
            char end = tolower(s[j]);
           if(isalnum(start) && isalnum(end)) {
            if(start != end) return false;
                j--;
                i++;
            }

            else if((isalnum(start) && !isalnum(end))) {
                j--;
            } else if(isalnum(end) && !isalnum(start)) i++;
            else {
                i++;
                j--;
            }

            
         
        }
        return true;
    }
};