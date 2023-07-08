#
# @lc app=leetcode id=118 lang=python3
#
# [118] Pascal's Triangle
#

# @lc code=start
class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        output = []

        for i in range(numRows):
            if i == 0:
                prev = [1]
                output.append(prev)
        
            else:
                cur = [1]
                j = 1
                while j < i:
                    cur.append(prev[j - 1] + prev[j])
                    j += 1
                cur.append(1)
                output.append(cur)
                prev = cur
                
        return output
# @lc code=end

