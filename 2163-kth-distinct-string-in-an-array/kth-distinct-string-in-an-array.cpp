class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int>mpp;
        string ans="";
        int count = 0;
        for(string i : arr) mpp[i]++;
        for(string i : arr) {
            if(mpp.find(i)!=mpp.end()) {
                if(mpp[i] == 1) {
                    count++;
                    cout << count <<endl;
                    }
            }
            if(count == k) {
                cout << i << endl;
                ans=i;
                return ans;
            }
        }
        return ans;
    }
};