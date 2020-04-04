#include <iostream>
#include <vector>
#include "limits.h"
using namespace std;

class Solution {
    public:
        int maxSubArray(vector<int> &nums) {
            int global_max = INT_MIN;
            int local_max = 0;
            for(int num : nums) {
                local_max = max(num, local_max + num);
                global_max = max(local_max, global_max);
            }
            return global_max;
        }
};
int main() {
    Solution s;
    vector<int> nums{-2,1,-3,4,-1,2,1,-5,4};
    cout << s.maxSubArray(nums);
}