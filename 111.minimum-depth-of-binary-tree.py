#
# @lc app=leetcode id=111 lang=python3
#
# [111] Minimum Depth of Binary Tree
#

# @lc code=start
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def minDepth(self, root: Optional[TreeNode]) -> int:

        if root is None: return 0

        leftheight = self.minDepth(root.left)
        rightheight = self.minDepth(root.right)

        if root.right is None and root.left is None: return 1

        if root.right is None: return leftheight + 1

        if root.left is None: return rightheight + 1

        return min(leftheight, rightheight) + 1

        
# @lc code=end

