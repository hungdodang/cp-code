int electionsWinners(std::vector<int> votes, int k) {
    int max_num = INT_MIN;
    int count = 0, count_max = 0;
    for(int num : votes) {
        if(num > max_num) {
            max_num = num;
            count_max = 1;
        }
        else if (num == max_num) count_max++;
    }
    if(k == 0) {
        if(count_max == 1) return 1;
        return 0;
    }
    for(int num : votes) {
        if(num + k > max_num) {
            count++;
        }
    }
    return count;
}
