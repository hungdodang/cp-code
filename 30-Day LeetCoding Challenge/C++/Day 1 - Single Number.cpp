// include library
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// class solution 
class Solution {
    public:
        /*
        singleNumber takes vector nums as input and
        return the number which just appears only one.
        */
        int singleNumber(vector<int>&nums) {
            int output = 0;
            for(int num : nums) {
                output ^= num;
            }
            return output;
        }
};
// main function
int main() {
    Solution s;
    // Test with example 1
    vector<int> input{4, 1, 2, 1, 2};
    cout << s.singleNumber(input);
}
