#include <iostream>
#include <vector>

using namespace std;

class Solution {
    public:
        int maxProfit(vector<int>& prices) {
            int max_profit = 0;
            for(int i = 1; i < prices.size(); i++) {
                if (prices[i-1] < prices[i]) {
                    max_profit += prices[i] - prices[i-1];
                }
            }
            return max_profit;
        }
};

int main() {
    Solution s;
    vector<int> prices{1,6,2,3,1};
    cout << s.maxProfit(prices);
    return 0;
}