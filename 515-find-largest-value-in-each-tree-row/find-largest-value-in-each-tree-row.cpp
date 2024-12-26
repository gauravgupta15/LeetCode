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
    vector<int> largestValues(TreeNode* root) {
        if(!root) return {};
         queue<TreeNode*>q;
        q.push(root);
        vector<int>ans;
        while(!q.empty()) {
            int size = q.size();
            int maxi = INT_MIN;
            while(size > 0) {
                TreeNode* temp = q.front();
                if(temp)
                    maxi = max(temp->val , maxi);
                q.pop();
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
                size--;
            }
            ans.push_back(maxi);
        }
        return ans;
    }
};