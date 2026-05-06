class Solution:
    def reverse(self, x: int) -> int:
        if (x == -(1 << 31) or x == (1 << 31) - 1) or x == 0:
            return 0
        signx = 1 if x > 0 else -1
        x = abs(x)

        base = 10 ** (cnt - 1)
        res = 0
        for _ in range(cnt + 1):
            res += (x % 10) * base
            x //= 10
            base //= 10
        if res > (1 << 31) - 1 or res < -(1 << 31):
            return 0
        return res * signx


