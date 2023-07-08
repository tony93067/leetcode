/*
 * @lc app=leetcode id=58 lang=cpp
 *
 * [58] Length of Last Word
 */

// @lc code=start
class Solution {
public:
    int lengthOfLastWord(string s) {
        int last_index  = s.rfind(" ", s.size() - 1);
        if(last_index == 0 && s.size() == 1)
            return 0;
        else if(last_index == s.size() - 1)
        {
            while(1)
            {
                int index = s.rfind(" ", last_index - 1);
                if(index == last_index - 1)
                {
                    last_index = index;
                    continue;
                }else
                    return last_index - index - 1;
            }
        }
        else
        {
            
            return s.size() - last_index - 1;
        }
    }
};
// @lc code=end

