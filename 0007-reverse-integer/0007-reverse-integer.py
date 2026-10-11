class Solution:
    def reverse(self, x: int) -> int:
        n = abs(x)
        rev = 0
        while n != 0:
            d = n % 10
            rev = rev * 10 + d
            n = n // 10
        
        if x < 0:
            rev = -rev
        
        if rev < -(2**31) or rev > (2**31 - 1):
            return 0
        else:
            return rev