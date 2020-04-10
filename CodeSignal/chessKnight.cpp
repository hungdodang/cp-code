int find_invalid_steps(char c) {
    if(c == '1' || c == '8') return 4;
    else if(c == '2' || c == '7') return 2;
    else return 0;
}
int chessKnight(std::string cell) {
    int max_moves = 8;
    char vertical = cell[1], horizontal = cell[0] - '0';
    
    int invalid_step_1 = find_invalid_steps(horizontal);
    int invalid_step_2 = find_invalid_steps(vertical);
    int total = invalid_step_1 + invalid_step_2;
    
    if(total == 8) return 2;
    else if (total == 6) return 3;
    else return max_moves - total;
}
