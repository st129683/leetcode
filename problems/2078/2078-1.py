class Solution:
    def maxDistance(self, colors: List[int]) -> int:
        res = 0

        n = len(colors) - 1
        i = n
        while colors[0] == colors[i]:
            i -= 1
        res = max(res, i)

        i = 0
        while colors[n] == colors[i]:
            i += 1
        res = max(res, n - i)

        return res
