/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
class Solution {
public:
    bool isValid(string s) {

        unordered_map <char,char> mp{{')','('},{']','['},{'}','{'}};
        stack <char> parentheses;

        if(s.size() % 2 != 0)
            return false;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{') {
                parentheses.push(s[i]);
            
            }else
            {
                if(parentheses.size() == 0)
                    return false;
                if(mp[s[i]] == parentheses.top())
                    parentheses.pop();
                else
                    return false;
            }
        }
        if(parentheses.size() != 0)
            return false;
        return true;
    }
};
// @lc code=end

