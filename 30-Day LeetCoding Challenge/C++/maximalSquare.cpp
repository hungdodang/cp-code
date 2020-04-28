class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        if(matrix.size() == 0 || matrix[0].size() == 0) {
            return 0;
        }
        int ans = 0;
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<vector<int>> dp(rows, vector<int>(cols));
        for(int row = 0; row < rows; row++) {
            for(int col = 0; col < cols; col++) {
                if(matrix[row][col] == '1') {
                    dp[row][col] = 1;
                    if(row > 0 && col > 0) {
                    dp[row][col] += min({dp[row][col-1], dp[row-1][col], dp[row-1][col-1]});
                    }
                    
                }
                
                ans = max(ans, dp[row][col]);
            }
        }
        return ans * ans ;
    }
};