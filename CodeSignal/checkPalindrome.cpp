bool checkPalindrome(std::string st) {
    int l = st.length();
    for(int i = 0, j = l - 1; i < l; i++, j--) {
        if(st[i] != st[j]) return false;
    }
    return true;
}

std::string buildPalindrome(std::string st) {
    string copy_str = st;
    int max = st.length();
    if(checkPalindrome(st)) return st;
    for(int i = 0; i < max; i++) {
        for(int j = 0; j <= i; j++) {
            copy_str += copy_str[i-j];
        }
        if(checkPalindrome(copy_str)) return copy_str;
        else copy_str = st;
    }
    return copy_str;
}
