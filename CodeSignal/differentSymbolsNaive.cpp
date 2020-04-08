int differentSymbolsNaive(std::string s) {
    vector<char> diffs;
    diffs.push_back(s[0]);
    for(char c : s) {
        for(int i = 0; i < diffs.size(); i++) {
            if (c == diffs[i]) {
                break;
            }
            if (i == diffs.size() - 1) diffs.push_back(c);
        }
    }
    return diffs.size();
}
