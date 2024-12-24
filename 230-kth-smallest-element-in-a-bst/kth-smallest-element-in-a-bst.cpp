/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        int ans = 0;
        stack<TreeNode*>st;
        TreeNode* curr = root;
        while(!st.empty() || curr) {
            while(curr) {
                st.push(curr);
                curr = curr->left;
            }
            // logical part:
            curr = st.top();
            st.pop();
            k--;
            ans = curr->val;
            
            // cout << ans << endl;
            if(k==0) break;
            
            curr = curr->right;
        }
        return ans;
    }
};