class Solution(object):
    def moveZeroes(self, nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        count = 0
        for i in range(len(nums)):
            if nums[i] != 0:
                temp = nums[count]
                nums[count] = nums[i]
                nums[i] = temp
                count += 1
        
s = Solution()
nums = [0,1,0,3,12]
s.moveZeroes(nums)
print(nums)