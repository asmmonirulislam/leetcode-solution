class Solution:
    def convert(self, s: str, numRows: int) -> str:
        if len(s)==1 or numRows==1: return s
        ans = [[] for _ in range(numRows)]
        row = 0
        direction = 1
        for ch in s:
            ans[row].append(ch)
            if row==0:
                direction = 1
            elif row == (numRows-1):
                direction = -1
            row += direction
        result = ''.join(''.join(row) for row in ans)
        return result