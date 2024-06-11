class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int>ans;
        vector<int>temp;

        map<int,int>mpp;
        for(int i: arr1) mpp[i]++;
        for(int i: arr2) {
            if(mpp.find(i)!=mpp.end()) {
                for(int j=0; j<mpp[i]; j++) {
                    ans.push_back(i);
                }

                mpp.erase(i);

            }
        }
        for(auto it : mpp) {
            for(int i=0;i<it.second; i++) {
                temp.push_back(it.first);
            }
        }

        for(int i : temp) {
            ans.push_back(i);
        }
        return ans;
    }
};