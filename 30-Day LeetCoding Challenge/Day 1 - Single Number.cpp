#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution{
    public:
        int singleNumber(vector<int>&nums) {
            int output = 0;
            for(int num : nums) {
                output ^= num;
            }
            return output;
        }
};
int main() {
    Solution s;
    vector<int> input{4, 1, 2, 1, 2};
    cout << s.singleNumber(input);

}
