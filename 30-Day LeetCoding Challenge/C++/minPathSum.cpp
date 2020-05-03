class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        vector<vector<int>> dp(rows,vector<int>(cols));
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                if(i == 0 && j == 0) {
                    dp[i][j] = grid[i][j];
                }
                else {
                    if(i == 0) {
                        dp[i][j] = grid[i][j] + dp[i][j-1];
                    }
                    else if (j == 0) {
                        dp[i][j] = grid[i][j] + dp[i-1][j];
                    }
                    else {
                        dp[i][j] = grid[i][j] + min(dp[i-1][j], dp[i][j-1]);
                    }
                }
            }
        }
        return dp[rows-1][cols-1];
    }
};