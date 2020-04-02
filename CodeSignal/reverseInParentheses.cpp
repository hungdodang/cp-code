#include <iostream>
#include <string>

using namespace std;

string reverseInParentheses(string inputString);
string reverseString(string input);

int main() {
    string str = reverseInParentheses("foo(bar(baz))blim");
    cout << str << endl;
    return 0;
}
string reverseInParentheses(string inputString) {
    while (inputString.find('(') != -1) {
        int first = inputString.find_last_of('(');
        int last = inputString.find(')', first);
        string temp = inputString.substr(first + 1, last - first - 1);
        temp = reverseString(temp);
        inputString.replace(first, last - first + 1, temp);
    }
    return inputString;
}
string reverseString(string input) {
    string output = input;
    for(int i = 0, j = input.length() - 1; i < input.length(); i++, j--) {
        output[i] = input[j];
    }
    return output;
}