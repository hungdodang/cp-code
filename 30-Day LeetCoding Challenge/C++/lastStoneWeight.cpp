#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        if(stones.size() == 0) return 0;
        else if(stones.size() == 1) return stones[0];
        else {
            sort(stones.begin(), stones.end());
            int new_stone = stones[stones.size()-1] - stones[stones.size()-2];
            stones.pop_back();
            stones.pop_back();
            stones.push_back(new_stone);
            return lastStoneWeight(stones);
        } 
    }
};
int main() {
    Solution s;
    vector<int> input = {2,7,4,1,8,1};
    cout << s.lastStoneWeight(input);
    return 0;
}