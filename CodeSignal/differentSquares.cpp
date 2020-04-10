
int differentSquares(std::vector<std::vector<int>> matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    set<int> s;
    for(int i = 0; i < rows - 1; i++) {
        for(int j = 0; j < cols - 1; j++) {
            int total = matrix[i][j] + 10*matrix[i][j+1] + 100*matrix[i+1][j] + 1000*matrix[i+1][j+1];
            s.insert(total);
        }    
    }
    return s.size();
}
