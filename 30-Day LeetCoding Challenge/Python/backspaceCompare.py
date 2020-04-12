class Solution(object):
    def getString(self, S):
        ans = ""
        count = 0
        for i in range(len(S)-1, -1, -1):
            if S[i] == "#":
                count += 1
            else:
                if count == 0:
                    ans = S[i] + ans
                else:
                    count -= 1
        return ans
    def backspaceCompare(self, S, T):
        """
        :type S: str
        :type T: str
        :rtype: bool
        """
        if self.getString(S) == self.getString(T):
            return True
        return False
s = Solution()
S = "ab##"
T = "c#d#"
print(s.backspaceCompare(S, T))