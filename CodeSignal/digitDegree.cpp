int calculate(int n) {
    int sum = 0;
    while(n) {
        sum += n%10;
        n /= 10;
    }
    return sum;
}
int digitDegree(int n) {
    int count = 0;
    if(n < 10) return 0;
    while(1) {
        n = calculate(n);
        count++;
        if (n > 9) continue;
        else break;
    }
    return count;
    
}
