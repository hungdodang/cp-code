bool validTime(std::string time) {
    string hour = time.substr(0,2);
    string minute = time.substr(3,2);
    int int_hour = stoi(hour);
    int int_minute = stoi(minute);
    if(int_hour >= 24 || int_minute >= 60) return false;
    return true;
}
