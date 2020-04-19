class Solution(object):
    def numIslands(self, grid):
        """
        :type grid: List[List[str]]
        :rtype: int
        """
        islands = 0
        rows = len(grid)
        if (rows == 0):
            return 0
        cols = len(grid[0])
        
        visited = [[False]*cols for _ in range(rows)]
        directions = [[0,1],[1,0],[0,-1],[-1,0]]
        for i in range(rows):
            for j in range(cols):
                if (visited[i][j] == False and grid[i][j] == "1"):
                    islands += 1
                    visited[i][j] = True
                    q = []
                    q.append([i,j])
                    while len(q) > 0:
                        idx = q.pop(0)
                        for k in range(len(directions)):
                            new_row = idx[0] + directions[k][0]
                            new_col = idx[1] + directions[k][1]
                            if ((new_row < rows and new_row >= 0) and (new_col < cols and new_col >= 0)):
                                if(visited[new_row][new_col] == False and grid[new_row][new_col] == "1"):
                                    visited[new_row][new_col] = True
                                    q.append([new_row,new_col])
        return islands