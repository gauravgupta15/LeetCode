class Solution {
public:
    int longestPalindrome(string s) {
        int sum=0;
        bool flag = false;
        unordered_map<char,int>mpp;
        for(char ch : s) mpp[ch]++;
        for(auto it : mpp) {
            if(it.second % 2==0) sum+=it.second;
            else{ 
                flag = true;
                sum+=it.second-1;
                }
        }
        if(flag)
            sum+=1;
        return sum;
    }
};