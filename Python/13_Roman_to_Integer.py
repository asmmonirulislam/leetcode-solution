# URL: https://leetcode.com/problems/roman-to-integer/

class Solution:
    def romanToInt(self, s: str) -> int:

        integer = 0
        n = len(s)-1

        mp = {
            'I':1,
            'V':5,
            'X':10,
            'L':50,
            'C':100,
            'D':500,
            'M':1000
        }

        for i, roman in enumerate(s):
            if (i<n) and (mp[roman]<mp[s[i+1]]):
                integer -= mp[roman]
            else:
                integer+=mp[roman]
        return integer