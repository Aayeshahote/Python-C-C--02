#include <iostream>
#include <string>

int reverse_and_add(int n) {
    int iterations = 0;
    
    while (true) {
        std::string str_n = std::to_string(n);  // Convert n to string
        std::string reversed_n(str_n.rbegin(), str_n.rend());  // Reverse the digits of n
        int reversed_n_int = std::stoi(reversed_n);  // Convert reversed_n to integer
        n += reversed_n_int;  // Add reversed_n to n
        iterations++;
        
        // Check if n is a palindrome
        str_n = std::to_string(n);
        int len = str_n.length();
        bool is_palindrome = true;
        
        for (int i = 0; i < len / 2; i++) {
            if (str_n[i] != str_n[len - i - 1]) {
                is_palindrome = false;
                break;
            }
        }
        
        if (is_palindrome) {
            return iterations;
        }
    }
}

int main() {
    int N;
    std::cin >> N;  // Read the number of test cases
    
    for (int i = 0; i < N; i++) {
        int P;
        std::cin >> P;  // Read the number P
        int iterations = reverse_and_add(P);
        std::cout << iterations << std::endl;
    }
    
    return 0;
}

