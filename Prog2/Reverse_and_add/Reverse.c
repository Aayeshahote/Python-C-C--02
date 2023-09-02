#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int reverse_and_add(int n) {
    int iterations = 0;
    char str_n[20];
    
    while (1) {
        sprintf(str_n, "%d", n);  // Convert n to string
        int len = strlen(str_n);
        char reversed_n[len + 1];
        
        for (int i = 0; i < len; i++) {
            reversed_n[i] = str_n[len - i - 1];  // Reverse the digits of n
        }
        reversed_n[len] = '\0';
        
        int reversed_n_int = atoi(reversed_n);  // Convert reversed_n to integer
        n += reversed_n_int;  // Add reversed_n to n
        iterations++;
        
        // Check if n is a palindrome
        sprintf(str_n, "%d", n);
        len = strlen(str_n);
        int is_palindrome = 1;
        
        for (int i = 0; i < len / 2; i++) {
            if (str_n[i] != str_n[len - i - 1]) {
                is_palindrome = 0;
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
    scanf("%d", &N);  // Read the number of test cases
    
    for (int i = 0; i < N; i++) {
        int P;
        scanf("%d", &P);  // Read the number P
        int iterations = reverse_and_add(P);
        printf("%d\n", iterations);
    }
    
    return 0;
}

