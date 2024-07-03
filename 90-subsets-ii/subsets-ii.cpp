class Solution {
public:
    void solve(vector<int> nums,vector<int> op,set<vector<int>>&st,vector<vector<int>>&unique) {
        if(nums.size() == 0) {
            sort(op.begin(),op.end());
           st.insert(op);
            return;
        }
        vector<int>op1 = op;
        vector<int>op2 = op;

        op2.push_back(nums[0]);
        nums.erase(nums.begin()+0);
        solve(nums,op1,st,unique);
        solve(nums,op2,st,unique);
            }

//     void solve(vector<int>arr, vector<int>op, vector<vector<int>>&ans) {
//     if(arr.size()==0) {
//         ans.push_back(op);
//         return;
//     }
//     vector<int>op1=op;
//     vector<int>op2 = op;
//     // decision lo
//     op2.push_back(arr[0]);
//     // remove the first element fronm input which was selected 
//     arr.erase(arr.begin()+0);
    
//     solve(arr,op1,ans);
//     solve(arr,op2,ans);
// }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int>op;
        set<vector<int>>st;
        vector<vector<int>>unique;
        solve(nums,op,st,unique);
        for(auto it : st) {
            unique.push_back(it);
        }
    
        return unique;
    }
};