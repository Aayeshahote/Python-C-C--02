#include <iostream>
#include <string>
#include <stack>

std::string removeKDigits(std::string num, int k) {
    std::stack<char> stack;

    // Iterate through each digit in the number
    for (char digit : num) {
        // Remove digits from the stack that are greater than the current digit
        while (!stack.empty() && k > 0 && stack.top() > digit) {
            stack.pop();
            k--;
        }

        // Add the current digit to the stack
        stack.push(digit);
    }

    // Remove any remaining digits to meet the k digit removal requirement
    while (k > 0 && !stack.empty()) {
        stack.pop();
        k--;
    }

    // Construct the smallest possible integer from the stack
    std::string smallestNum;
    while (!stack.empty()) {
        smallestNum = stack.top() + smallestNum;
        stack.pop();
    }

    // Handle the

