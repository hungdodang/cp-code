class Solution:
    def calculate(self, n):
        total = 0
        while n != 0:
            total += (n%10)*(n%10)
            n /= 10
        return total
    def isHappy(self, n):
        nums = []
        num = n
        nums.append(num)
        while True:
            num = self.calculate(num)
            if num == 1:
                return True
            elif num in nums:
                return False
            else:
                nums.append(num)
# Test with example
solution = Solution()
print(solution.isHappy(19))