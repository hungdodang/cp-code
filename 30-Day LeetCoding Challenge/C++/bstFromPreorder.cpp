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
    
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int size = preorder.size();
        TreeNode *root = new TreeNode(preorder[0]);
        int i = 1;
        stack<TreeNode*> s;
        s.push(root);
        TreeNode* temp;
        while(i < size) {
            temp = NULL;
            while(!s.empty() && s.top()->val < preorder[i]) {
                temp = s.top();
                s.pop();
            }
            if(temp != NULL) {
                temp->right = new TreeNode(preorder[i]);
                s.push(temp->right);
            }
            else {
                temp = s.top();
                temp->left = new TreeNode(preorder[i]);
                s.push(temp->left);
                
            }
            i++;
        }
        return root;
    }
};