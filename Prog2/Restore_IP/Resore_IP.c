#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void backtrack(char* s, int segments, char* current_ip, char** result, int* result_count) {
    // Base case: If all segments are formed and the entire string is consumed, add the current IP to the result
    if (segments == 4 && *s == '\0') {
        current_ip[strlen(current_ip) - 1] = '\0';  // Remove the last '.'
        result[*result_count] = malloc(strlen(current_ip) + 1);
        strcpy(result[*result_count], current_ip);
        (*result_count)++;
        return;
    }

    // Base case: If all segments are formed but some part of the string is remaining, return
    if (segments == 4 || *s == '\0') {
        return;
    }

    // Explore different choices for the current segment
    for (int i = 1; i <= 3 && *s != '\0'; i++) {
        char segment[4];
        strncpy(segment, s, i);
        segment[i] = '\0';

        // Check for the validity of the segment
        if ((segment[0] == '0' && i > 1) || atoi(segment) > 255) {
            break;
        }

        // Recursively backtrack for the remaining string and next segment
        strcat(current_ip, segment);
        strcat(current_ip, ".");
        backtrack(s + i, segments + 1, current_ip, result, result_count);
        current_ip[strlen(current_ip) - i - 1] = '\0';  // Remove the added segment and '.' for backtracking
    }
}

char** restoreIpAddresses(char* s, int* returnSize) {
    char** result = malloc(100 * sizeof(char*));  // Assuming maximum 100 possible IP addresses
    *returnSize;
  char** restored_ips = restoreIpAddresses(s, &returnSize);

    for (int i = 0; i < returnSize; i++) {
        printf("%s\n", restored_ips[i]);
        free(restored_ips[i]);
    }
    free(restored_ips);

    return 0;
}
