bool is_in_alphabet(char c) {
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        return true;
    }
    return false;
}
std::string longestWord(std::string text) {
    string current_word;
    
    string last_word;
    bool has_at_least_one_in_alphabet = false;
    if(is_in_alphabet(text[0])) {
        current_word += text[0];
        has_at_least_one_in_alphabet = true;
    }
    for(int i = 1; i < text.length(); i++) {
        if(is_in_alphabet(text[i] && is_in_alphabet(text[i-1]))) {
            if(last_word.length() < current_word.length()) {
                last_word = current_word;
                current_word = "";
                current_word += text[i];
            } 
        }
        else if(is_in_alphabet(text[i])) {
            has_at_least_one_in_alphabet = true;
            current_word += text[i];
        } 
        else{
            if(last_word.length() < current_word.length()) {
                last_word = current_word;
              
            }
            current_word = "";
        }
    }
    if(has_at_least_one_in_alphabet) return current_word.length() > last_word.length() ? current_word : last_word;
    else return "";
}
