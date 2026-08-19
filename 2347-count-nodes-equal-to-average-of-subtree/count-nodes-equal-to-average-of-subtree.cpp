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
    int ans = 0;

    int getSum(TreeNode* root) {
        if (root == nullptr) return 0;

        return root->val + getSum(root->left) + getSum(root->right);
    }

    int getCount(TreeNode* root) {
        if (root == nullptr) return 0;

        return 1 + getCount(root->left) + getCount(root->right);
    }

    void dfs(TreeNode* root) {
        if (root == nullptr) return;

        int sum = getSum(root);
        int count = getCount(root);

        if (sum / count == root->val) {
            ans++;
        }

        dfs(root->left);
        dfs(root->right);
    }

    int averageOfSubtree(TreeNode* root) {
        dfs(root);
        return ans;
    }
};