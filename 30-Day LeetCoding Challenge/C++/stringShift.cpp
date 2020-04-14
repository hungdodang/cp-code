#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    string stringShift(string s, vector<vector<int>>& shift) {
        int length = s.length();
        int x = 0;
        bool is_left;
        for(int i = 0; i < shift.size(); i++) {
            if(shift[i][0] == 0) x -= shift[i][1];
            else x += shift[i][1];
        }
        if(x == 0) return s;
        else if(x > 0) is_left = false;
        else is_left = true;
        x = abs(x)%length;
        string s_after_shift = s;
        for(int i = 0; i < length; i++) {
            if(is_left) {
                if(i >= x) s_after_shift[i-x] = s[i];
                else s_after_shift[length-x+i] = s[i];
            }
            else {
                if(i + x > length - 1) s_after_shift[i + x - length] = s[i];
                else s_after_shift[i + x] = s[i];
            }
        }
        return s_after_shift;
    }
};

int main() {
    Solution s;
    vector<vector<int>> input = {{1,1},{1,1},{0,2},{1,3}};
    string str = "abcdefg";
    cout << s.stringShift(str,input);
    return 0;

}