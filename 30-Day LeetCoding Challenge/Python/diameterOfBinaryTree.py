# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def findDiameterAndDepth(self, root):
        if root == None:
            return [0, 0]
        left = self.findDiameterAndDepth(root.left)
        right = self.findDiameterAndDepth(root.right)
        longest_path = max(left[0], right[0], left[1] + right[1])
        depth = max(left[1], right[1]) + 1
        return [longest_path, depth]
    def diameterOfBinaryTree(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        ans = self.findDiameterAndDepth(root)
        return ans[0]
        