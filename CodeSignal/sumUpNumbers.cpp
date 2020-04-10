bool isDigit(char n) {
    if (n >= '0' && n <= '9') return true;
    return false;
}
int sumUpNumbers(std::string inputString) {
    int total = 0;
    string num = "0";
    for(int i = 0; i < inputString.length(); i++) { 
        if((i != inputString.length() - 1 ) && (isDigit(inputString[i]) && !isDigit(inputString[i+1]))) {
                num += inputString[i];
                total += stoi(num);
                num = "0";
        }
        else if(isDigit(inputString[i])) num += inputString[i]; 
    }

    total += stoi(num);
    return total;
}
