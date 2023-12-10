class Solution:
    def hIndex(self, citations: List[int]) -> int:
        citations.sort()
        count = 0
        
        for i in range(len(citations)-1, -1, -1):
            count += 1
            if citations[i] < count:
                count -= 1
                break
        return max(count,0)