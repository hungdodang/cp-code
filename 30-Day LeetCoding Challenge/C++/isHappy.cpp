// include library
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// class solution 
class Solution{
    public:
        /*
        isHappy is a function takes int n as input and
        return True if n is a "Happy Number", or False
        if n is not a "Happy Number".
        */
        bool isHappy(int n) {
            vector<int> nums;
            nums.push_back(n);
            int num = n;
            while(1) {
                num = calculate(num);
                if(num == 1) return true;
                // check if num exists in vector nums, if true it will loop endlessly in a clycle which does not include 1
                else if (find(nums.begin(), nums.end(), num) != nums.end()) return false;
                // if num doesn't exist in nums, push num in nums vector for next iterator
                else nums.push_back(num);
            }
        }
        /* 
        Calculate function takes int n as an argument. 
        This function will calculate and return an integer, 
        following the rule:
            in = AB -> out = A^2 + B^2
        */
        int calculate(int n) {
            int total = 0;
            while(n != 0) {
                total += (n%10)*(n%10);
                n /= 10;
            }
            return total;
        }
};

// main function
int main() {
    Solution s;
    // test with example 1
    s.isHappy(19);
}
