class Solution {
public:
    void helper( int i, vector<int>& nums, vector<int>& subset, vector<vector<int>>& ans){

        int n = nums.size();
        if( i == n ){
            ans.push_back(subset);
            return;
        }
        subset.push_back(nums[i]);
        helper( i+1, nums, subset, ans);
        
        subset.pop_back();
        helper( i+1, nums, subset, ans);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans; 

        vector<int> subset ; 
        helper(0, nums, subset, ans);
        return ans;
    }
};