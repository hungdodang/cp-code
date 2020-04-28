class FirstUnique(object):

    def __init__(self, nums):
        """
        :type nums: List[int]
        """
        self.q = []
        self.count_in_q = {}
        for num in nums:
            self.q.append(num)
            if num in self.count_in_q:
                self.count_in_q[num] += 1
            else:
                self.count_in_q[num] = 1
        

    def showFirstUnique(self):
        """
        :rtype: int
        """
        while self.q:
            first = self.q[0]
            if (self.count_in_q[first] == 1):
                return first
            else:
                self.q.pop(0)
        return -1

    def add(self, value):
        """
        :type value: int
        :rtype: None
        """
        self.q.append(value)
        if value in self.count_in_q:
            self.count_in_q[value] += 1
        else:
            self.count_in_q[value] = 1


# Your FirstUnique object will be instantiated and called as such:
# obj = FirstUnique(nums)
# param_1 = obj.showFirstUnique()
# obj.add(value)