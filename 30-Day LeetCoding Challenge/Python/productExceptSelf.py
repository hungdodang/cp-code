class Solution(object):
    def productExceptSelf(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        prefix = [1]
        suffix = [1]*(len(nums)+1)
        for i in range(len(nums)):
            prefix.append(prefix[i]*nums[i])
        for i in range(len(nums)-1,-1,-1):
            suffix[i] = suffix[i+1]*nums[i]
        for i in range(len(nums)):
            nums[i] = prefix[i]*suffix[i+1]
        return nums
input = [1,2,3,4]
s = Solution()
print(s.productExceptSelf(input))
                