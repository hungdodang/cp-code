int arrayMaxConsecutiveSum(std::vector<int> inputArray, int k) {
    int global_max = INT_MIN;
    int count = 0;
    int sum = 0;
    for(int i = 0; i< inputArray.size(); i++) {
        sum += inputArray[i];   
        count++;
        if (count == k) {
            if(sum > global_max) {
                global_max = sum;
            }
            count = k - 1;
            sum -= inputArray[i-k+1];
        }   
    }
    return global_max;
}
