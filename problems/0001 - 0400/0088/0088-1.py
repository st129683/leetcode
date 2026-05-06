class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        temp = 1e9 + 1
        i = 0
        j = 0
        while i < m and j < n:
            if temp != 1e9 + 1 and temp < nums2[j]:
                nums1[i], temp = temp, nums1[i]
                i += 1
            elif nums1[i] < nums2[j]:
                i += 1
            else:
                temp = nums1[i]
                nums1[i] = nums2[j]
                j += 1
        if i == m:
            for k in range(j, n):
                nums1[k] = nums2[k]
        else:
            for k in range(i, m):
                nums1[i], temp = temp, nums1[i]