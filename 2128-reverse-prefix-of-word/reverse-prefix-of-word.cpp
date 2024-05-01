class Solution {
public:
    string reversePrefix(string word, char ch) {
        stack<char>st;
        int found= 0;
        for(int i=0; i<word.length(); i++) {
            if(word[i] == ch) {
                found=1;
                st.push(word[i]);
                break;
            }
            st.push(word[i]);
        }
        int i=0;
        while(!st.empty() && found==1) {
            word[i] = st.top();
            st.pop();
            i++;
        }
        return word;
    }
};