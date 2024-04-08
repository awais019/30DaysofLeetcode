class Solution {
    unordered_map<char, string> digitToChar;

    void backtrack(int index, string digits, string currStr,
                   vector<string>& res) {
        if (currStr.length() == digits.length()) {
            res.push_back(currStr);
            return;
        }

        for (char c : digitToChar.at(digits[index])) {
            backtrack(index + 1, digits, currStr + c, res);
        }
    }

public:
    Solution(){
        digitToChar['2'] = "abc";
        digitToChar['3'] = "def";
        digitToChar['4'] =  "ghi";
        digitToChar['5'] = "jkl";
        digitToChar['6'] = "mno";
        digitToChar['7'] = "pqrs";
        digitToChar['8'] = "tuv";
        digitToChar['9'] =  "wxyz";
    }
    
    vector<string> letterCombinations(string digits) {
        vector<string> res = {};
        if (digits.length() != 0) {
            backtrack(0, digits, "", res);
        }
        return res;
    }
};