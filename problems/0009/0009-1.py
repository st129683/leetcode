class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0:
            return False
        n = x
        rev = 0
        while n:
            rev = 10 * rev + (n % 10)
            n //= 10
        return x == rev
