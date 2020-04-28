class Solution(object):
    def maximalSquare(self, matrix):
        """
        :type matrix: List[List[str]]
        :rtype: int
        """
        ans = 0
        if not matrix:
            return ans
        
        rows = len(matrix)
        cols = len(matrix[0])
        dp = [[0 for i in range(cols)] for j in range(rows)]
        for row in range(rows):
            for col in range(cols):
                if matrix[row][col] == '1':
                    dp[row][col] = 1
                    if row > 0 and col > 0:
                        dp[row][col] += min(dp[row][col-1], dp[row-1][col], dp[row-1][col-1])
                ans = max(ans, dp[row][col])
        return ans*ans