class Solution(object):
    def findMaxLength(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        dic = {0: 0}
        ans = 0
        sum = 0
        for i in range(len(nums)):
            if nums[i] == 0:
                sum += -1
            else:
                sum += 1
            if sum in dic:
                ans = max(ans, i + 1 - dic[sum])
            else:
                dic[sum] = i + 1
        return ans

s = Solution()
input = [0,1,0,0,1,0,1,1,1,0,0,0]
print(s.findMaxLength(input))