#
# @lc app=leetcode id=119 lang=python3
#
# [119] Pascal's Triangle II
#

# @lc code=start
class Solution:
    def getRow(self, rowIndex: int) -> List[int]:
        output = []

        for i in range(rowIndex + 1):
            if i == 0:
                prev = [1]
                output.append(1);
            else:
                j = 1;
                cur = [1]
                while j < i:
                    cur.append(prev[j] + prev[j-1])
                    j += 1
                cur.append(1)
                prev = cur
                if i == rowIndex:
                    output = cur
        
        return output
# @lc code=end

