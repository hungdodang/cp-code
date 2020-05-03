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
    int ans = INT_MIN;
    int dfs(TreeNode* root) {
         if(root == NULL) {
            return 0;
        }
        int x = dfs(root->left);
        int y = dfs(root->right);
        ans = max(ans, x + y + root->val);
        return max(0, max(x, y) + root->val);
    }
    int maxPathSum(TreeNode* root) {
       dfs(root);
       return ans; 
    }
};