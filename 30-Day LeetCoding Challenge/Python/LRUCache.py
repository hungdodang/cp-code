class LRUCache(object):

    def __init__(self, capacity):
        """
        :type capacity: int
        """
        self.size = capacity
        self.q = []
        self.count_in_q = {}
        self.cache = {}
    def insert_in_queue(self, key):
        self.q.append(key)
        if key in self.count_in_q:
            self.count_in_q[key] += 1
        else:
            self.count_in_q[key] = 1
    
    def get(self, key):
        """
        :type key: int
        :rtype: int
        """
        if key in self.cache:
            self.insert_in_queue(key)
            return self.cache[key]
        return -1

    def put(self, key, value):
        """
        :type key: int
        :type value: int
        :rtype: None
        """
        if len(self.cache) < self.size:
            self.insert_in_queue(key)
            self.cache[key] = value
        else:
            if key in self.cache:
                self.insert_in_queue(key)
                self.cache[key] = value
            else:
                while True:
                    first = self.q.pop(0)
                    self.count_in_q[first] -= 1
                    if self.count_in_q[first] == 0:
                        self.cache.pop(first)
                        break
                self.insert_in_queue(key)
                self.cache[key] = value


# Your LRUCache object will be instantiated and called as such:
# obj = LRUCache(capacity)
# param_1 = obj.get(key)
# obj.put(key,value)