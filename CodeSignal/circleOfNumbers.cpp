int circleOfNumbers(int n, int firstNumber) {
    int radius = n/2;
    return firstNumber < radius ? (firstNumber + radius) : (firstNumber - radius);
}
