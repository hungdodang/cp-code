class Solution(object):
    def countElements(self, arr):
        """
        :type arr: List[int]
        :rtype: int
        """
        ls = arr
        count = 0
        for num in arr:
            if (num+1) in ls:
                count += 1    
        return count

input = [1,3,2,3,5,0]
s = Solution()
print(s.countElements(input))