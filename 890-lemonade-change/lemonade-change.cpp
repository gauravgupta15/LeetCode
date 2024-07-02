class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int cnt1=0,cnt2=0,cnt3=0;
        for(int i : bills) {
            if(i == 5) cnt1++;
            else if(i == 10) {
                cnt2++;
                if(cnt1) cnt1--;
                else return false;
            } else {
                cnt3++;
                if(cnt2 && cnt1) {
                    cnt2--;
                    cnt1--;
                } else if(cnt1 >= 3) {
                    cnt1-=3;
                }  else return false;
            }
        } return true;
    }
};