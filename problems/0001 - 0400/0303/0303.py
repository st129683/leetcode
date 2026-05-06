class NumArray:
    def __init__(self, nums: List[int]):
        if not nums:
            return
        self.prefs = [0] * len(nums)
        self.prefs[0] = nums[0]
        for i in range(1, len(nums)):
            self.prefs[i] = self.prefs[i - 1] + nums[i]

    def sumRange(self, left: int, right: int) -> int:
        if left == 0:
            return self.prefs[right]
        return self.prefs[right] - self.prefs[left - 1]


# Your NumArray object will be instantiated and called as such:
# obj = NumArray(nums)
# param_1 = obj.sumRange(left,right)
