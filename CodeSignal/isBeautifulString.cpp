bool isBeautifulString(std::string inputString) {
    sort(inputString.begin(), inputString.end());
    int count = 1, last_count = INT_MAX;
    char c = 'a';
    if(inputString[0] != 'a') return false;
    for(int i = 1; i < inputString.length(); i++) {
        if(inputString[i] != inputString[i-1]) {
            if((int)inputString[i]-1 != (int)c) return false;
            if(count > last_count) return false;
            else {
                last_count = count;
                c = inputString[i];
                count = 1;
            }
        }
        else {
            count++;
        }
    }
    if(count > last_count) return false;
    return true;
}
