class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        if(grid.empty() || grid[0].empty()) return 0;
        int islands = 0;
        int rows = grid.size();
        int cols = grid[0].size();
        vector<vector<bool>> visited(rows, vector<bool>(cols));
        vector<pair<int, int>> directions = {{0,1},{1,0},{0,-1},{-1,0}};
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                if(!visited[i][j] && grid[i][j] == '1') {
                    islands++;
                    visited[i][j] = true;
                    queue<pair<int, int>> q;
                    q.push({i, j});
                    while(!q.empty()) {
                      pair<int, int> idx = q.front();
                      q.pop();
                      for(int k = 0; k < directions.size(); k++) {
                          int new_row = directions[k].first + idx.first;
                          int new_col = directions[k].second + idx.second;
                          if((new_row < rows && new_row >= 0) && (new_col < cols && new_col >= 0)) {
                              if(!visited[new_row][new_col] && grid[new_row][new_col] == '1') {
                                  visited[new_row][new_col] = true;
                                  q.push({new_row,new_col});
                              }
                          }
                      }  
                    }
                }
            }
        }
        return islands;
    }
};