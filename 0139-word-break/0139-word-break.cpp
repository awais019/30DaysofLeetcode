class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        bool *dp = new bool[s.length() + 1];
        int i = 0;
        for(;i < s.length(); i++){
            dp[i] = false;
        }
        dp[i] = true;
        
        for(;i >= 0; i--){
            for(string w:wordDict){
            if((i + w.length() <= s.length()) && s.substr(i, w.length()) == w){
                dp[i] = dp[i + w.length()];
            }
                if(dp[i] == true){
                    break;          
                }
            }
        }
    return dp[0];
    }
};