/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
bool pathsum(TreeNode* root, int targetSum, int sum) {
    if (root == nullptr) {
        return false;
    }
    sum += root->val;
    if (!root->left && !root->right) {
        if (sum == targetSum) {
            return true;
        }
    } else if (!root->left && root->right) {
        if (pathsum(root->right, targetSum, sum)) {
            return true;
        }
    } else if (root->left && !root->right) {
        if (pathsum(root->left, targetSum, sum)) {
            return true;
        }
    } else {
        if (pathsum(root->left, targetSum, sum) ||
            pathsum(root->right, targetSum, sum)) {
            return true;
        }
    }
    return false;
}
class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (pathsum(root, targetSum, 0)) {
            return true;
        } else {
            return false;
        }
    }
};