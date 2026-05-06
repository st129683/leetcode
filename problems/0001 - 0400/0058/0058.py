class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        start = len(s) - 1
        while s[start] == ' ':
            start -= 1
        cnt = 0
        for i in range(start, -1, -1):
            if s[i] == ' ':
                return cnt
            cnt += 1
        return cnt
