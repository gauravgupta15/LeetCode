class Solution {
public:
void solve(vector<vector<int>>&v,vector<int>op,vector<int>nums ) {
    if(nums.size()==0) {
        v.push_back(op);
        return;
    }

    for(int i=0; i<nums.size(); i++) {
        vector<int>newOp = op;
        newOp.push_back(nums[i]);
        vector<int>newIp;
        newIp.insert(newIp.end(),nums.begin(),nums.begin()+i);
        newIp.insert(newIp.end(),nums.begin()+i+1,nums.end());
        solve(v,newOp,newIp);
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>op;
        solve(ans,op,nums);
        return ans;
    }
};