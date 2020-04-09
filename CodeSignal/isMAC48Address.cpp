bool isHexa(char c) {
    if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'F')) return true;
    return false;
}
bool isMAC48Address(std::string inputString) {
    int count_to_hyphen = 0;
    if(inputString.length() != 17) return false;
    for(int i = 0; i < inputString.length(); i++) {
        if(count_to_hyphen == 2) {
            if(inputString[i] == '-') {
                count_to_hyphen = 0;
                continue;
            }
            else return false;
        }
        cout << isHexa(inputString[i]);
        if(!isHexa(inputString[i])) {
            return false;
        }
        else count_to_hyphen++;
    }
    return true;
}
