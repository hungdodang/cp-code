class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        max_profit = 0
        for i in range(1,len(prices)):
            if prices[i-1] < prices[i]:
                max_profit += prices[i] - prices[i-1]
        return max_profit
s = Solution()
nums = [5,1,6,2,1,7]
s.moveZeroes(nums)
print(nums)