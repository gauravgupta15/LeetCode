class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char>st;
        string str;
        bool flag = false;
        for(char ch : s) {
            if(st.empty()) {
                st.push(ch);
            } else if(ch == '(') {
                st.push(ch);
                str.push_back(ch);
            } else if(ch == ')') {
                st.pop();
                if(!st.empty()) {
                    str.push_back(ch);
                }
            }
        }
        return str;
    }
};