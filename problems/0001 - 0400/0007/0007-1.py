class Solution:
    def reverse(self, x: int) -> int:
        INT_MAX = (1 << 31) - 1
        INT_MIN = -INT_MAX - 1

        if x == INT_MIN or x == INT_MAX or x == 0:
            return 0
        signx = 1 if x > 0 else -1
        x = abs(x)
        res = 0
        while x:
            last_digit = x % 10
            res = 10 * res + last_digit
            if res > INT_MAX:
                return 0
            x //= 10
        return signx * res
