#include <stdio.h>

char* countCarryOperations(int num1, int num2) {
    int carry = 0;
    int carryCount = 0;

    while (num1 > 0 || num2 > 0) {
        int digit1 = num1 % 10;
        int digit2 = num2 % 10;

        int sumDigits = digit1 + digit2 + carry;

        if (sumDigits >= 10) {
            carry = 1;
            carryCount += 1;
        } else {
            carry = 0;
        }

        num1 /= 10;
        num2 /= 10;
    }

    if (carryCount == 0) {
        return "No carry operation.";
    } else if (carryCount == 1) {
        return "1 carry operation.";
    } else {
        static char result[20];
        sprintf(result, "%d carry operations.", carryCount);
        return result;
    }
}

int main() {
    int num1, num2;

    while (1) {
        scanf("%d %d", &num1, &num2);
        if (num1 == 0 && num2 == 0) {
            break;
        }

        char* result = countCarryOperations(num1, num2);
        printf("%s\n", result);
    }

    return 0;
}

