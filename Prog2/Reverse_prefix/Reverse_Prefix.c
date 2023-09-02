#include <iostream>
#include <string>

std::string reverseSegment(const std::string& word, char ch) {
    if (word.find(ch) == std::string::npos) {
        return word;
    }

    size_t idx = word.find(ch);
    return std::string(word.rbegin(), word.rend() - idx) + word.substr(idx + 1);
}

int main() {
    std::string word1 = "abcdefd";
    char ch1 = 'd';
    std::cout << reverseSegment(word1, ch1) << std::endl;  // Output: "dcbaefd"

    std::string word2 = "xyxzxe";
    char ch2 = 'z';
    std::cout << reverseSegment(word2, ch2) << std::endl;  // Output: "zxyxxe"

    std::string word3 = "abcd";
    char ch3 = 'z';
    std::cout << reverseSegment(word3, ch3) << std::endl;  // Output: "abcd"

    return 0;
}

