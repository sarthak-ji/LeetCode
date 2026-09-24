class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {

        if (p == NULL && q == NULL)
            return true;

        if (p == NULL || q == NULL)
            return false;

        if (p->val != q->val)
            return false;

        bool L = isSameTree(p->left, q->left);
        bool R = isSameTree(p->right, q->right);

        return L && R;
    }
};