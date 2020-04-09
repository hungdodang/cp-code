std::string findEmailDomain(std::string address) {
    int idx = address.find_last_of('@');
    string domain = address.substr(idx+1,address.length()-idx);
    cout << domain;
    return domain;
}
