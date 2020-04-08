char firstDigit(std::string inputString) {
    for(char c:inputString) {
        if ((int)c >= 48 && (int)c <= 57) {
            return c;
        }
    }
}
