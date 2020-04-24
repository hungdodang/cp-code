/**
 * // This is the BinaryMatrix's API interface.
 * // You should not implement it, or speculate about its implementation
 * class BinaryMatrix {
 *   public:
 *     int get(int row, int col);
 *     vector<int> dimensions();
 * };
 */

class Solution {
public:
    int leftMostColumnWithOne(BinaryMatrix &binaryMatrix) {
        //{rows,cols}
        vector<int> dimensions = binaryMatrix.dimensions();
        int minCol = INT_MAX;
        bool hasOne = false;
        for(int i = 0; i < dimensions[0]; i++) {
            int l = 0;
            int r = dimensions[1] - 1;
            int col = -1;
            while(l <= r) {
                int m = l + (r - l)/2;
                int value = binaryMatrix.get(i, m);
                if(value == 0) {
                    l = m + 1;
                }
                else {
                    r = m - 1;
                    col = m;
                    hasOne = true;
                }
            }
            if(col != -1)
                minCol = min(col, minCol);
        }
        if(hasOne)
            return minCol;
        return -1;
    }
};