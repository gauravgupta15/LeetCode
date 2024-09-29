class Solution {
public:
    int strStr(string haystack, string needle) {
       if(needle.size() > haystack.size()) return -1;
       for(int i=0; i<=haystack.size() - needle.size(); i++) {
        if(needle == haystack.substr(i,needle.size())) return i;
        // cout << haystack.substr(i,i+needle.size())<<endl;

       } return -1;
       

    }    
};