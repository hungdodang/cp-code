#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int findWeight(std::string s1, std::string s2) {
    int weight = 0;
    for(int i = 0; i < s1.length(); i++) {
        if(s1[i] != s2[i]) weight++;
    }
    return weight;
}
bool stringsRearrangement(std::vector<std::string> inputArray) {
    sort(inputArray.begin(),inputArray.end());
    do {

        bool continuous_flag = false;
        for(int i = 0; i < inputArray.size() - 1; i++) {
            continuous_flag = false;
            int weight = findWeight(inputArray[i],inputArray[i+1]);
            if (weight == 1) {
                continuous_flag = true;
            }
            else {
                break
            }
        }
        if (continuous_flag == true) return true;
    }while(next_permutation(inputArray.begin(), inputArray.end()));
    return false;
}

int main() {
    std::vector<std::string> input = {"bbc", "bba", "abc"};
    std::cout << stringsRearrangement(input) << std::endl;
    return 0;
}