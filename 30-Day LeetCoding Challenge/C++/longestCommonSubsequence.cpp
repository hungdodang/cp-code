class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int l1 = text1.length();
        int l2 = text2.length();
        int ans = 0;
        vector<vector<int>> dp(l1, vector<int>(l2));
        for(int i = 0; i < l1; i++) {
            for(int j = 0; j < l2; j++) {
                if(text1[i] == text2[j]) {
                    dp[i][j] = 1;
                    if(i > 0 && j > 0) {
                        dp[i][j] = dp[i-1][j-1] + 1;
                    
                    }
                }
                else {
                    if(i == 0 && j > 0) {
                        dp[i][j] = dp[i][j-1];
                    }
                    else if(i > 0 && j == 0) {
                        dp[i][j] = dp[i-1][j];
                    }
                    else if(i > 0 && j > 0) {
                        dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                    }
                }
                ans = max(dp[i][j], ans);
            }
        }
        return ans;
    }
};