class Solution(object):
    def stringShift(self, s, shift):
        """
        :type s: str
        :type shift: List[List[int]]
        :rtype: str
        """
        step = 0
        length = len(s)
        is_left = False
        for el in shift:
            if el[0] == 0:
                step -= el[1]
            else:
                step += el[1]
        if 0 == step:
            return s
        elif step > 0:
            is_left = False
        else:
            is_left = True
        step = abs(step)%length
        s_after_shift = list(s)
        for i in range(length):
            if is_left:
                if i >= step:
                    s_after_shift[i-step] = s[i]
                else:
                    s_after_shift[length-step+i] = s[i]
            else:
                if i + step > length - 1:
                    s_after_shift[i + step - length] = s[i]
                else:
                    s_after_shift[i+ step] = s[i]
        return "".join(s_after_shift)
                

input = [[1,1],[1,1],[0,2],[1,3]]
str = "abcdefg"
s = Solution()
print(s.stringShift(str,input))