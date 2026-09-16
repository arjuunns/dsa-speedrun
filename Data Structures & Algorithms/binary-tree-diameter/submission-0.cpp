class Solution {
private:
    int height(TreeNode* root, int& ans) {
        if (!root) return 0;
        int lh = height(root->left, ans);
        int rh = height(root->right, ans);
        ans = max(ans, lh + rh);
        return 1 + max(lh, rh);
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int ans = 0;
        height(root, ans);
        return ans;
    }
};