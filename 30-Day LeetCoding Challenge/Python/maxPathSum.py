# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
import sys
class Solution(object):
    ans = -sys.maxint - 1
    def maxPathSum(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        self.dfs(root)
        return self.ans
    def dfs(self, root):
        if root == None:
            return 0
        x = self.dfs(root.left)
        y = self.dfs(root.right)
        self.ans = max(self.ans, x + y + root.val)
        return max(0, max(x,y) + root.val)