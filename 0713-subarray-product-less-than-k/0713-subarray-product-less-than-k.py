class Solution:
    def numSubarrayProductLessThanK(self, nums: List[int], k: int) -> int:
        low = 0
        prod = 1
        count = 0
        high = 0
        if k<= 1:
            return 0
        for i in nums:
            prod = prod * i
            high += 1

            while prod >= k:
                prod = prod // nums[low]
                low += 1
            
            count += high - low 
        
        return count