class Solution {
public:
    bool judgeSquareSum(int c) {
        vector<long>v;
        for(int i=0; i<=sqrt(c); i++) {
            v.push_back(i*i);
        }
        int i=0,j=v.size()-1;
        while(i<=j) {
            if(v[i]+v[j] == c) return true;
            else if(v[i] + v[j] > c) j--;
            else i++;
        } return false;
    }
};