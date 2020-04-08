bool bishopAndPawn(std::string bishop, std::string pawn) {
    if (abs((int)bishop[0]-(int)pawn[0]) == abs(bishop[1]-pawn[1])) return true;
    else return false;
}