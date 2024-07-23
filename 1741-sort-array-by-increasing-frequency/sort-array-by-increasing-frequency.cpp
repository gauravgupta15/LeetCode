class Solution {
public:

    vector<int> frequencySort(vector<int>& nums) {\
        // sort(nums.begin(),nums.end());
        unordered_map<int,int>mpp;
        vector<int>v;

             for(int it : nums) {
            mpp[it]++;
        }

       sort(nums.begin(),nums.end(), [&mpp](int a, int b) {
        if(mpp[a]!=mpp[b]) {
            return mpp[a]<mpp[b];
        }
        return a>b;
       });

        return nums;
        // vector<int>v;
        // while(!minH.empty()) {
        //     v.push_back(minH.top());
        //     minH.pop();
        // }
        // for(int  i : v) {
        //     if
        // }
        
    }
};