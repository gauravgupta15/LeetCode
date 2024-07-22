class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int,string>mpp;
        vector<string>v;
        for(int i=0; i<names.size(); i++) {
            mpp[heights[i]] = names[i];
        }
        for(auto it : mpp) {
            v.push_back(it.second);
        }
        reverse(v.begin(),v.end());
        return v;
    }
};