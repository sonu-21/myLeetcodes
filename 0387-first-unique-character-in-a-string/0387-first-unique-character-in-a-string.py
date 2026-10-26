class Solution(object):
    def firstUniqChar(self, s):
        freq = {}

        for x in s:
            freq[x] = freq.get(x,0) + 1
        
        for i,x in enumerate(s):
            if freq[x] == 1:
                return i
        
        return -1
        