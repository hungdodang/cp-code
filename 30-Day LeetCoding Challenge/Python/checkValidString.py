class Solution(object):
    def checkValidString(self, s):
        """
        :type s: str
        :rtype: bool
        """
        sum = 0
        for i in range(len(s)):
            if s[i] == '(' or s[i] == '*':
                sum += 1
            else:
                sum -= 1
                if(sum == -1):
                    return False
        sum = 0
        for i in range(len(s)-1,-1,-1):
            if s[i] == ')' or s[i] == '*':
                sum += 1
            else:
                sum -= 1
                if(sum == -1):
                    return False
        return True