# URL: https://leetcode.com/problems/reverse-integer/

# Digit Extraction Approach
class Solution:
    def reverse(self, x: int) -> int:
        sign = -1 if x<0 else 1
        limit = 2**31
        x = abs(x)
        rev = 0
        while x:
            rev = (rev*10)+(x%10)
            x//=10
        rev*=sign
        if rev < -limit or rev > limit:
            return 0
        return rev
    
# Using String:

class Solution:
    def reverse(self, x: int) -> int:
        sign = ''
        digits = ''
        for i in str(x):
            if i.isdigit():
                digits+=i
            else:
                sign+=i
        rev = int(sign+digits[::-1])
        limit = 2**31
        if rev > -limit and rev < limit:
            return rev
        return 0