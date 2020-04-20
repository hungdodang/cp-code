# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def bstFromPreorder(self, preorder):
        """
        :type preorder: List[int]
        :rtype: TreeNode
        """
        root = TreeNode(preorder[0])
        size = len(preorder)
        i = 1
        s = []
        s.append(root)
        while i < len(preorder):
            temp = None
            while(len(s) > 0 and s[-1].val < preorder[i]):
                temp = s.pop()
            if temp != None:
                temp.right = TreeNode(preorder[i])
                s.append(temp.right)
            else:
                temp = s[-1]
                temp.left = TreeNode(preorder[i])
                s.append(temp.left)
            i += 1
        return root