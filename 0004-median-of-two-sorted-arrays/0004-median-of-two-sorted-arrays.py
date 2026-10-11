class Solution:
    def findMedianSortedArrays(self, nums1: list[int], nums2: list[int]) -> float:
        res = []
        m = len(nums1)
        n = len(nums2)
        i = 0
        j = 0
        while i < m and j < n:
            if nums1[i] < nums2[j]:
                res.append(nums1[i])
                i = i + 1
            else:
                res.append(nums2[j])
                j += 1
        if i >= m:
            while j < n:
                res.append(nums2[j]) 
                j += 1
        if j >= n:
            while i < m:
                res.append(nums1[i])
                i += 1

        n = len(res)
        mid = n // 2
        if n % 2 == 0:
            return (res[mid] + res[mid - 1]) / 2
        else:
            return res[mid]