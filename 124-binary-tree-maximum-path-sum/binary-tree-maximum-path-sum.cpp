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
    int best = INT_MIN;

    int gain(TreeNode* node) {
        if (node == nullptr) return 0;

        int l = max(0, gain(node->left));    
        int r = max(0, gain(node->right));

        best = max(best, node->val + l + r); 

        return node->val + max(l, r);       
    }

    int maxPathSum(TreeNode* root) {
        gain(root);
        return best;
    }
};