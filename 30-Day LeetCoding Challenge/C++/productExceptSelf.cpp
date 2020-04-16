#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int total = 1, count_zeros = 0;
        for(int num : nums) {
            if(num != 0)
                total = total*num;
            else count_zeros++;
        }
        vector<int> ans;
        for(int i = 0; i < (int) nums.size(); i++) {
            if(count_zeros == 1 && nums[i] == 0) ans.push_back(total);
            else if(count_zeros > 0) ans.push_back(0);
            else ans.push_back(total/nums[i]);
        }
        return ans;
    }
};

int main() {
    vector<int> input = {1,2,3,4};
    Solution s;
    vector<int> output = s.productExceptSelf(input);
    for(int num : output) {
        cout << num << ", ";
    }
    return 0;
}