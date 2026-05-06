class Solution:
    def isPerfectSquare(self, num: int) -> bool:
        start = 1
        end = num
        while start <= end:
            mid = start + (end - start) // 2
            mid2 = mid ** 2
            if mid2 == num:
                return True
            elif mid2 < num:
                start = mid + 1
            else:
                end = mid - 1
        return False
