class Solution:
    def addDigits(self, num: int) -> int:
        while num > 9:
            cnt = 0
            tmp = num
            while tmp:
                cnt += tmp % 10
                tmp //= 10
            num = cnt
        return num
