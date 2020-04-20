class Solution(object):
    def search(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        if len(nums) == 0:
            return -1
        l = 0
        r = len(nums) - 1
        while l <= r:
            m = l + (r-l)/2
            if nums[m] == target:
                return m
            mGreater = nums[m] >= nums[0]
            tGreater = target >= nums[0]
            if mGreater == tGreater:
                if target > nums[m]:
                    l = m + 1
                else:
                    r = m - 1
            else:
                if mGreater == True:
                    l = m + 1
                else:
                    r = m - 1
        return -1