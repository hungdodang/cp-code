# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def middleNode(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        ln = []
        node = head
        while node != None:
            ln.append(node)
            node = node.next
        middle = int(len(ln)/2)
        return ln[middle]

