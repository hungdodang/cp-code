class Solution {
public:
    bool checkValidString(string s) {
        int sum = 0;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '(' || s[i] == '*') {
                sum++;
            }
            else {
                sum--;
                if(sum == -1) return false;
            }
        }
        sum = 0;
        for(int i = s.length()-1; i > -1; i--) {
            if(s[i] == ')' || s[i] == '*') {
                    sum++;
            }
            else {
                sum--;
                if(sum == -1) return false;
            }
        }
        return true;
    }
};