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
class Solution {
public:
    int maxDepth(TreeNode* root) {
        int L, R;

        if (!root)
            return 0;

        if (root->left) {
            L = maxDepth(root->left);
        } else {
            L = 0;
        }

        if (root->right) {
            R = maxDepth(root->right);
        } else {
            R = 0;
        }

        return 1 + max(L, R);
    }
};