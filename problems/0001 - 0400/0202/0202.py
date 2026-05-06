class Solution:
    def isHappy(self, n: int) -> bool:
        while n > 9:
            cnt = 0
            temp = n
            while temp:
                cnt += (temp % 10) ** 2
                temp //= 10
            n = cnt

        if n == 1 or n == 7:
            return True
        return False
