int deleteDigit(int n) {
    string num = to_string(n);
    int first_min[2] = {num[0], 0};
    bool has_first_max = false;
    for(int i = 1; i < num.length(); i++) {
        if(num[i] <  first_min[0]) {
            first_min[0] = num[i];
            first_min[1] = i;
        }
        else if (num[i] > first_min[0] && i != num.length() - 1) {
            break;
        }
    }
    string new_str;
    for(int i = 0; i < num.length(); i++) {
        if(i != first_min[1]) new_str += num[i];
    }
    int new_num = stoi(new_str);
    return new_num;
}
