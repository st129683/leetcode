class Solution:
    def fib(self, n: int) -> int:
        if n < 2:
            return n
        fib_prev = 0
        fib_curr = 1
        for _ in range(2, n + 1):
            fib_curr += fib_prev
            fib_prev = fib_curr - fib_prev
        return fib_curr
