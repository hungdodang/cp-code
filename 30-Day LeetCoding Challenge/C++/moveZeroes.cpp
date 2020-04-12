#include <iostream>
#include <vector>
#include "limits.h"
using namespace std;

class Solution {
    public:
        void moveZeroes(vector<int>& nums) {
            int count = 0;
            for(int i = 0; i < nums.size(); i++) {
                if(nums[i] != 0) {
                    //swap nums[i] and nums[count]
                    int temp = nums[count];
                    nums[count] = nums[i];
                    nums[i] = temp;
                    count++;
                }
            }
        }
};
int main() {
    Solution s;
    vector<int> nums{0,1,0,3,12};
    s.moveZeroes(nums);
    for(int num : nums) {
        cout << num << ", ";
    }

}