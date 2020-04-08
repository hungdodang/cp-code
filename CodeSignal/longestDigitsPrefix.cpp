std::string longestDigitsPrefix(std::string inputString) {
    string ans = "";
    int last = 0;
    for(int i = 0; i < inputString.length(); i++) {
        if ((int)inputString[i] >= 48 && (int)inputString[i] <= 57) 
            ans += inputString[i];     
        else break;
    }
    return ans;   
}
