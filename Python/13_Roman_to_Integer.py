class Solution:
    def romanToInt(self, s: str) -> int:
        integer = {
            'I':1,
            'V':5,
            'X':10,
            'L':50,
            'C':100,
            'D':500,
            'M':1000
        }
        result=0
        for i, roman in enumerate(s):
            if i<len(s)-1 and integer[roman] < integer[s[i+1]]:
                result-=integer[roman]
            else:
                result+=integer[roman]
        return result