#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int countElements(vector<int>& arr) {
        unordered_map<int, vector<int>> a;
        int count = 0;
        for(int num : arr) {      
            a[num+1].push_back(num);
        }
        for(int num:arr) {
            count+=a[num].size();
            a[num].clear();
        }
        return count;
    }
};

int main() {
    vector<int> input = {1,3,2,3,5,0};
    Solution s;
    cout << s.countElements(input);
    return 0;
}