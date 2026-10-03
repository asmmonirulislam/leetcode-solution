# URL: https://leetcode.com/problems/longest-substring-without-repeating-characters/submissions/2089970561/

class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        freq = set()
        left = 0
        max_count = 0
        n = len(s)

        for right in range(n):
            while s[right] in freq:
                freq.remove(s[left])
                left+=1
            freq.add(s[right])
            max_count = max(max_count, right-left+1)
        return max_count