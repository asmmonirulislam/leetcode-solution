# URL: https://leetcode.com/problems/string-to-integer-atoi/description/

class Solution:
    def myAtoi(self, s: str) -> int:
        s = s.strip()
        if not s:
            return 0
        sign, i, res, limit = 1, 0, 0, 2**31
        if s[0]=='-':
            i+=1
            sign = -1
        elif s[0]=='+':
            i+=1
        
        while i<len(s) and s[i].isdigit():
            res = (res*10)+int(s[i])
            if res*sign < -limit:
                return -limit
            if res*sign > limit-1:
                return limit-1
            i+=1
        return sign * res
