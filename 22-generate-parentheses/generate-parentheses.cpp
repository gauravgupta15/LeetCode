class Solution {
public:
    void solve(int open,int close,vector<string>&ans,int n, string op) {
        if(open == 0 && close ==0) {
            ans.push_back(op);
            return;
        }

        if(open != 0) {
            string op1 = op;
            op1.push_back('(');
            solve(open-1,close,ans,n,op1);
        } 
        if(close > open) {
            string op2 = op;
            op2.push_back(')');
            solve(open,close-1,ans,n,op2);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string op = "";
        int open = n;
        int close = n;
        solve(open,close,ans,n,op);
        return ans;
    }
};