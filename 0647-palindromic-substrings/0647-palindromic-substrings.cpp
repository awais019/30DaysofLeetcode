class Solution {
public:
    int countPalindromes(string s, int left, int right){
        int res = 0;
        while(left >= 0 && right < s.length() && s[left] == s[right]){
                res++;
                left--;
                right++;
        }
        return res;
    }
    int countSubstrings(string s) {
        int count = 0;
        int left = 0;
        int right = 0;
        for(int i = 0; i < s.length(); i++){
            left = i;
            right = i;
            count += countPalindromes(s, left, right);
            left = i;
            right = i + 1;
            count += countPalindromes(s, left, right);
        }
        return count;
    }
};