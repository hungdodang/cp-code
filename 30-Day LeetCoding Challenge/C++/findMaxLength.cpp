#include <iostream>
#include <algorithm>
#include <vector>
#include<unordered_map> 
using namespace std;


class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int sum = 0, ans = 0;
        unordered_map<int, int> m;
        m[0] = 0;
        
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 1) sum += 1;
            else sum += -1;
            auto it = m.find(sum);
            if(it != m.end()) ans = max(ans, i+1-m[sum]);
            else m[sum] = i+1;
        }
        return ans;
    }
};
int main() {
    vector<int> input = {0,1,0,0,1,0,1,1,1,0,0,0};
    Solution s;
    cout << s.findMaxLength(input);
    return 0;
}