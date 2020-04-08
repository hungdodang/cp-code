bool chessBoardCellColor(std::string cell1, std::string cell2) {
    int total_cell1 = 0, total_cell2 = 0;
    for(int i = 0; i < cell1.size(); i++) {
        int ascii1 = (int)cell1[i];
        int ascii2= (int)cell2[i];
        if(i == 0) {
            total_cell1 += ascii1;
            total_cell2 += ascii2;
        }
        else {
           total_cell1 += cell1[i];
           total_cell2 += cell2[i];
        }
    }
    return (total_cell1 % 2 == total_cell2 % 2) ? true : false;
}
