int depositProfit(int deposit, int rate, int threshold) {
    float total = (float)deposit;
    int years = 0;
    while(total < threshold) {
        total += total * ((float)rate/100);
        years++;
    }
    return years;
}
