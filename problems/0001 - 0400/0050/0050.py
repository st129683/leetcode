class Solution:
    def myPow(self, x: float, n: int) -> float:
        if n == 1 or x == 0 or x == 0:
            return x
        elif n == 0:
            return 1
        elif n < 0:
            return 1 / self.myPow(x, -n)
        else:
            half = self.myPow(x, n // 2)
            if n % 2:
                return half * half * x
            else:
                return half * half
