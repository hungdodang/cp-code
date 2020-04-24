class Solution(object):
    def subarraySum(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        sum = 0
        ans = 0
        m = {0: 1}

        for num in nums:
            sum += num
            need = sum - k
            if need in m:
                ans += m[need]
            if sum in m:
                m[sum] += 1
            else:
                m[sum] = 1
        return ans
        
        