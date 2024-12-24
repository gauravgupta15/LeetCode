/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    private Integer prev = null; // To store the previous node value
    private int minDiff = Integer.MAX_VALUE; // To store the minimum difference

    public int minDiffInBST(TreeNode root) {
        if (root == null) return 0;

        // Perform in-order traversal to find the minimum difference
        inOrderTraversal(root);
        return minDiff;
    }

    private void inOrderTraversal(TreeNode node) {
        if (node == null) return;

        // Traverse the left subtree
        inOrderTraversal(node.left);

        // Process the current node
        if (prev != null) {
            minDiff = Math.min(minDiff, node.val - prev);
        }
        prev = node.val;

        // Traverse the right subtree
        inOrderTraversal(node.right);
    }
}
