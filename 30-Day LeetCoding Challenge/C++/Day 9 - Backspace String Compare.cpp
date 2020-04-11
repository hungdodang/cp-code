#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string stringInEditor(string S) {
        string str_in_editor;
        int count = 0;
        for (int i = S.length() - 1; i >= 0; i--) {
			if (S[i] == '#') {
				count++;
			}
			else {
				if (count == 0) {
					str_in_editor = S[i] + str_in_editor;
				}
				else count--;
			}
		}
        return str_in_editor;
    }
	bool backspaceCompare(string S, string T) {
		return stringInEditor(S) == stringInEditor(T) ? true : false;

	}
};

int main() {
    Solution s;
    string S = "ab##";
    string T = "c#d#";
    cout << s.backspaceCompare(S, T);
    return 0;
}