#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> total_of_strs;
        vector<vector<string>> ans;
        for(string s: strs) {
            bool flag = false;
            string s2 = s;
            sort(s2.begin(), s2.end());
            for(int index = 0; index < total_of_strs.size(); index++) {
                if (s2 == total_of_strs[index]) {
                    ans[index].push_back(s);
                    flag = true;
                    break;
                    }
            }
            if (flag == false) {
                vector<string> strings{s};
                ans.push_back(strings);
                total_of_strs.push_back(s2);  
            }  
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<string> strs{"eat", "tea", "tan", "ate", "nat", "bat", "duh", "ill"};
    vector<vector<string>> ans = s.groupAnagrams(strs);
    for(int i = 0; i < ans.size(); i++) {
        cout << "[";
        for(string s: ans[i]) {
            cout << s << ", ";
        }
        cout << "]" << endl;
    }
    return 0;
}