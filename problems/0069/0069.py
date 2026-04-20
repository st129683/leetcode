class Solution:
    def mySqrt(self, x: int) -> int:
        start = 1
        end = x
        while start <= end:
            mid = start + (end - start) // 2
            mid2 = mid * mid
            if mid2 == x:
                return mid
            elif mid2 < x:
                start = mid + 1
            else:
                end = mid - 1
        return end
