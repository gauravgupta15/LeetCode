class Solution {
public:
    bool judgeCircle(string moves) {
        int R_count=0,U_count =0;
        for(char ch : moves) {
            if(ch == 'R') R_count++;
            else if(ch == 'L') R_count--;
            else if(ch == 'U') U_count++;
            else U_count--;
        }
        return R_count==0 && U_count==0;
    }
};