# URL: https://leetcode.com/problems/longest-palindromic-substring/description/


# Brute Force Technique:

class Solution:
    def longestPalindrome(self, s: str) -> str:
        if len(s)<=1: return s
        max_length = 1
        max_str = s[0]
        for i in range(len(s)-1):
            for j in range(i+1, len(s)):
                if j-i+1 > max_length and s[i:j+1] == s[i:j+1][::-1]:
                    max_length = j-i+1
                    max_str = s[i: j+1]
        return max_str


# Expansion Technique:

class Solution:
    def longestPalindrome(self, s: str) -> str:
        def expand(l:int, r:int)->str:
            while l>=0 and r<len(s) and s[l]==s[r]:
                l-=1; r+=1
            return s[l+1:r]
        max_str = s[0]
        for i in range(len(s)):
            odd = expand(i, i)
            even = expand(i, i+1)

            if len(odd) > len(max_str):
                max_str = odd
            if len(even) > len(max_str):
                max_str = even
        return max_str
        
# Dynamic Programming Approach:

class Solution:
    def longestPalindrome(self, s: str) -> str:
        dp =[[False for _ in range(len(s))] for _ in range(len(s))]
        max_length = 1
        max_str = s[0]

        for i in range(len(s)):
            dp[i][i]=True
            for j in range(i):
                if s[j]==s[i] and (i-j<=2 or dp[j+1][i-1]):
                    dp[j][i]=True
                    if i-j+1 > max_length:
                        max_length = i-j+1
                        max_str = s[j:i+1]
        return max_str
        
        
        
# Manacher Algorithm:
