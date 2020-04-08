int absoluteValuesSumMinimization(std::vector<int> a) {
    //medium_low
    int len = a.size();
    if (len % 2 != 0) {
        return a[len/2];
    }
    else return a[len/2 - 1];
}
