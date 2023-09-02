#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* removeKDigits(char* num, int k) {
    int length = strlen(num);

    // Create a stack to store the digits
    char stack[length + 1];
    int top = -1;

    // Iterate through each digit in the number
    for (int i = 0; i < length; i++) {
        char digit = num[i];

        // Remove digits from the stack that are greater than the current digit
        while (top >= 0 && k > 0 && stack[top] > digit) {
            top--;
            k--;
        }

        // Add the current digit to the stack
        stack[++top] = digit;
    }

    // Remove any remaining digits to meet the k digit removal requirement
    while (k > 0 && top >= 0) {
        top--;
        k--;
    }

    // Construct the smallest possible integer from the stack
    char* smallestNum = (char*)malloc((top + 2) * sizeof(char));
    int index = 0;
    while (top >= 0) {
        smallestNum[index++] = stack[top--];
    }
    smallestNum[index] = '\0';

    // Reverse the resulting number
    int start = 0;
    int end = index - 1;
    while (start < end) {
        char temp = smallestNum[start];
        smallestNum[start] = smallestNum[end];
        smallestNum[end] = temp;
        start++;
        end--;
    }

    // Handle the case where the resulting number is empty
    if (index == 0) {
        smallestNum[0] = '0';
        smallestNum[1] = '\0';
    }

    return smallestNum;
}

int main() {
    char num[] = "1432219";
    int k = 3;
    char* smallestInteger = removeKDigits(num, k);
    printf("%s\n", smallestInteger);
    free(smallestInteger);
    return 0;
}

