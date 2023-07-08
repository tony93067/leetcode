/*
 * @lc app=leetcode id=67 lang=cpp
 *
 * [67] Add Binary
 */

// @lc code=start
class Solution {
public:
    string addBinary(string a, string b) {

        string result = "";
        int carry = 0;
        while(a.size() != b.size()) {
            if(a.size() < b.size())
                a = "0" + a;
            else if(a.size() > b.size())
                b = "0" + b;
        }
        for(int i = a.size() - 1; i >= 0; i--)
        {
            if(a[i] == '1' && b[i] == '1')
            {
                if(carry == 0) result = "0" + result;
                else result = "1" + result;

                carry = 1;
            }
            else if(a[i] == '0' && b[i] == '0')
            {
                if(carry == 0) result = "0" + result;
                else result = "1" + result;
                carry = 0;
            }
            else
            {
                if(carry == 1)
                {
                    result = "0" + result;
                    carry = 1;
                }
                else
                {
                    result = "1" + result;
                }
            }
            
        }
        if (carry == 1)
            result = "1" + result;
        return result;
    }
};
// @lc code=end

