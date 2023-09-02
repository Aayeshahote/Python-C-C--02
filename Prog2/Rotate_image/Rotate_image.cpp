#include <iostream>

void rotateImage(int** matrix, int n) {
    // Transpose the matrix
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    // Reverse each row
    for (int i = 0; i < n; i++) {
        int start = 0;
        int end = n - 1;
        while (start < end) {
            int temp = matrix[i][start];
            matrix[i][start] = matrix[i][end];
            matrix[i][end] = temp;
            start++;
            end--;
        }
    }
}

int main() {
    int n = 3;
    int** image = new int*[n];
    for (int i = 0; i < n; i++) {
        image[i] = new int[n];
    }

    // Assign values to the image matrix
    image[0][0] = 1

