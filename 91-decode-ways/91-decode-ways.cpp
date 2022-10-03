class Solution {
    int helper(int i, vector<int> &dp, string &s){
        if(i == s.size()) return 1;
        if(s[i] == '0') return 0;
        if(dp[i] != -1) return dp[i];
        int totalWays = 0;
        totalWays += helper(i + 1, dp, s);
        if(i + 1 < s.size()){
            int c = ((s[i] - '0') * 10 + (s[i+1] - '0'));
            if(c <= 26) totalWays += helper(i + 2, dp, s);
        }
        return dp[i] = totalWays;
    }
public:
    int numDecodings(string s) {
        vector<int> dp(s.size(), -1);
        return helper(0, dp, s);
    }
};