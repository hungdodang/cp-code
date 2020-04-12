class MinStack(object):
    
    def __init__(self):
        """
        initialize your data structure here.
        """
        self.s = []
        

    def push(self, x):
        """
        :type x: int
        :rtype: None
        """
        if len(self.s) == 0:
            self.s.append([x,x])
        else:
            self.s.append([x, min(x,self.s[len(self.s)-1][1])])

    def pop(self):
        """
        :rtype: None
        """
        if len(self.s) > 0:
            self.s.pop()
        

    def top(self):
        """
        :rtype: int
        """
        if len(self.s) > 0:
            return self.s[len(self.s)-1][0]
        

    def getMin(self):
        """
        :rtype: int
        """
        if len(self.s) > 0:
            return self.s[len(self.s)-1][1]
        


# Your MinStack object will be instantiated and called as such:obj = MinStack()
obj.push(x)
obj.pop()
param_3 = obj.top()
param_4 = obj.getMin()