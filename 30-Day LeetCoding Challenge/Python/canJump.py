class Solution(object):
    def canJump(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        length = len(nums)
        if length == 1:
            return True
        maxJump = 1
        for i in range(length):
            maxJump -= 1
            if maxJump == 0 and nums[i] == 0 and i != length - 1:
                return False
            maxJump = max(maxJump, nums[i])
        return True