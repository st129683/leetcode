def f(n: int) -> int:
    res = 0
    for i in range(n):
        res += (i + 1) * 10 ** i
    return res


class Solution:
    def findNthDigit(self, n: int) -> int:
        digits = 1
        while 9 * f(digits) < n:
            digits += 1
        lower_bound = 9 * f(digits - 1) + 1
        s = ''
        for i in range(10 ** (digits - 1), 10 ** digits):
            s += str(i)
        return int(s[n - lower_bound])
