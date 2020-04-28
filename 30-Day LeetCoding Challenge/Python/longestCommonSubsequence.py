class Solution(object):
    def longestCommonSubsequence(self, text1, text2):
        """
        :type text1: str
        :type text2: str
        :rtype: int
        """
        l1 = len(text1)
        l2 = len(text2)
        if l1 == 0 or l2 == 0:
            return 0
        ans = 0
        dp = [[0 for a in range(l2)] for b in range(l1)]
        for i in range(l1):
            for j in range(l2):
                if text1[i] == text2[j]: 
                    dp[i][j] = 1
                    if i > 0 and j > 0:
                        dp[i][j] = dp[i-1][j-1] + 1
                else:
                    if (i > 0 and j == 0):
                        dp[i][j] = dp[i-1][j]
                    elif (i == 0 and j > 0):
                        dp[i][j] = dp[i][j-1]
                    elif i > 0 and j > 0:
                        dp[i][j] = max(dp[i-1][j], dp[i][j-1])
                ans = max(ans, dp[i][j])
        return ans