/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int index = 0;
        for(int i = 0; i < nums.size(); i++) 
        {
            if(i == 0 || nums[i]!= nums[i - 1])
            {
                nums[index] = nums[i];
                index++;
            }
        }
        return index;
    }
};
// @lc code=end

