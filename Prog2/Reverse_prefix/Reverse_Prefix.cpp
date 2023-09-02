#include <iostream>
#include <string>
#include <unordered_set>

bool isPangram(const std::string& sentence) {
    std::unordered_set<char> alphabet { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };

    for (char c : sentence) {
        alphabet.erase(tolower(c));
        if (alphabet.empty()) {
            return true;
        }
    }

    return false;
}

int main() {
    std::string sentence1 = "thequickbrownfoxjumpsoverthelazydog";
    std::cout << std::boolalpha << isPangram(sentence1) << std::endl;  // Output: true

    std::string sentence2 = "dbatu";
    std::cout << std::boolalpha << isPangram(sentence2) << std::endl;  // Output: false

    return 0;
}

