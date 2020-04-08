#include <iostream>
#include <string>

using namespace std;

string alphabeticShift(string inputString);

int main() {
    string str = alphabeticShift("abc");
    cout << str << endl;
    return 0;
}

string alphabeticShift(string inputString) {
    string ans = "";
    for(int i = 0; i < inputString.size(); i++) {
        int code = (int)(inputString[i]);
        if (code == 122) {
            code = 122 - 26;
        }
        ans += (char)(code + 1);
    }
    return ans;
}