class Solution(object):
    def rangeBitwiseAnd(self, m, n):
        """
        :type m: int
        :type n: int
        :rtype: int
        """
        if m == n:
            return m
        else:
            return self.rangeBitwiseAnd(m >> 1, n >> 1) << 1