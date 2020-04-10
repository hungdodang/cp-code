std::string lineEncoding(std::string s) {
    vector<char> symbols;
    vector<int> length;
    int count = 1;
    string encode_str;
    symbols.push_back(s[0]);
    for(int i = 1; i < s.length(); i++) {
        if(s[i] != s[i-1]) {
            symbols.push_back(s[i]);
            length.push_back(count);
            count = 1;      
        }
        else {
            count++;
        }
        if(i == s.length() - 1) length.push_back(count);
    }
    for(int i = 0; i < symbols.size(); i++) {
        if(length[i] != 1) {
            string num = to_string(length[i]);
            encode_str += num;
        }
        encode_str += symbols[i];
    }
    return encode_str;
}
