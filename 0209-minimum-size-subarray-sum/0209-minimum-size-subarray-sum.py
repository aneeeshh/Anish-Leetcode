class Solution:
    def minSubArrayLen(self, target: int, nums: List[int]) -> int:
        low = 0
        high = 0
        sum = 0
        min_len = float('inf')

        for num in nums:
            sum += num
            high += 1

            while sum >= target:
                min_len = min(min_len, high - low)
                sum -= nums[low]
                low += 1

        if min_len == float('inf'):
            return 0
        else:
            return min_len