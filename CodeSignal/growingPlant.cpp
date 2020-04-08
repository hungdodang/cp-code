int growingPlant(int upSpeed, int downSpeed, int desiredHeight) {
    int height = upSpeed;
    int count = 1;
    while(desiredHeight > height) {
        height -= downSpeed;
        height += upSpeed;
        count++;
    }
    return count;
}
