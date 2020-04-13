class Solution(object):
    def lastStoneWeight(self, stones):
        """
        :type stones: List[int]
        :rtype: int
        """
        if len(stones) == 0:
            return 0
        elif len(stones) == 1:
            return stones[0]
        else:
            sorted_stones = sorted(stones)
            new_stone = sorted_stones[-1] - sorted_stones[-2]
            new_stones = sorted_stones[:-2] + [new_stone]
            return self.lastStoneWeight(new_stones)

input = [2,7,4,1,8,1]
s = Solution()
print(s.lastStoneWeight(input))