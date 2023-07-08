#
# @lc app=leetcode id=110 lang=python3
#
# [110] Balanced Binary Tree
#

# @lc code=start
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isBalanced(self, root: Optional[TreeNode]) -> bool:
        
        return (self.height(root) >= 0)

    def height(self, root):
        if root is None:
            return 0
        leftheight = self.height(root.left)
        rightheight = self.height(root.right)

        if leftheight < 0 or rightheight < 0 or abs(leftheight - rightheight) > 1: return -1

        return max(leftheight, rightheight) + 1

        


# @lc code=end

