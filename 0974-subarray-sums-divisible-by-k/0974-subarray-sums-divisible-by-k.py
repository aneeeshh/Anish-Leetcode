class Solution:
    def subarraysDivByK(self, nums: List[int], k: int) -> int:
        count = 0
        prefix = 0
        freq = {0:1}

        for num in nums:
            prefix += num

            if prefix % k in freq:
                count += freq[prefix % k]

            if prefix % k in freq:
                freq[prefix % k] += 1
            else:
                freq[prefix % k] = 1
        return count