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
    pair<int, int> findDiameterAndDepth(TreeNode* node) {
        if(node == NULL)
            return {0,0};
        pair<int, int> left_node = findDiameterAndDepth(node->left);
        pair<int, int> right_node = findDiameterAndDepth(node->right);
        int longest_path = max({left_node.first, right_node.first, left_node.second + right_node.second});
        return {longest_path, max(left_node.second, right_node.second) + 1};
    }
    int diameterOfBinaryTree(TreeNode* root) {
        return findDiameterAndDepth(root).first;
    }
};