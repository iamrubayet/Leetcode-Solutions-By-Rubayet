import random
class RandomizedSet:
    mp = None

    def __init__(self):
        self.mp = dict()
        

    def insert(self, val: int) -> bool:
        if val in self.mp:
            return False
        self.mp[val] = True
        return True

    def remove(self, val: int) -> bool:
        if val not in self.mp:
            return False
        del self.mp[val]
        return True

    def getRandom(self) -> int:
        lst = list(self.mp.keys())
        x = random.randint(0, len(lst)-1)
        return lst[x]


# Your RandomizedSet object will be instantiated and called as such:
# obj = RandomizedSet()
# param_1 = obj.insert(val)
# param_2 = obj.remove(val)
# param_3 = obj.getRandom()