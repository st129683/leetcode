class Solution:
    def tribonacci(self, n: int) -> int:
        if n < 2:
            return n
        if n == 2:
            return 1

        trib_left = 0
        trib_mid = 1
        trib_right = 1
        for _ in range(3, n + 1):
            trib_left, trib_mid, trib_right = trib_mid, trib_right, trib_left + trib_mid + trib_right
        return trib_right
