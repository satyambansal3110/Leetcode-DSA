/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*,TreeNode*>parent;

        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty()){
            TreeNode* curr=q.front();
            q.pop();

            if(curr->left){
                parent[curr->left]=curr;
                q.push(curr->left);
            }
             if(curr->right){
                parent[curr->right]=curr;
                q.push(curr->right);
            }
        }
        unordered_set<TreeNode*>visited;
        q.push(target);
        visited.insert(target);
        int d=0;

        while(!q.empty()){
            if(d==k) break;
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode* curr=q.front();
                q.pop();

                if(curr->left && !visited.count(curr->left)){
                    visited.insert(curr->left);
                    q.push(curr->left);
                }
                 if(curr->right && !visited.count(curr->right)){
                    visited.insert(curr->right);
                    q.push(curr->right);
                }
                 if(parent.count(curr) && !visited.count(parent[curr])){
                    visited.insert(parent[curr]);
                    q.push(parent[curr]);
                }
            }
            d++;
        }
        vector<int>ans;
        while(!q.empty()){
            ans.push_back(q.front()->val);
            q.pop();
        }
        return ans;
    }
};