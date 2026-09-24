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
    int minDepth(TreeNode* root) {
        int L, R;

        if (!root)
            return 0;
        if (root->left == NULL && root->right == NULL)
            return 1;

        if (root->left) {
            L = minDepth(root->left);
        } 

        if (root->right) {
            R = minDepth(root->right);
        } 

        return 1 + min(L, R);
    }
};