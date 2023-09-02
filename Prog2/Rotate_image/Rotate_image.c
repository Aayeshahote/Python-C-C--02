#include <stdio.h>

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
    int** image = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) {
        image[i] = (int*)malloc(n * sizeof(int));
    }

    // Assign values to the image matrix
    image[0][0] = 1;
    image[0][1] = 2;
    image[0][2] = 3;
    image[1][0] = 4;
    image[1][1] = 5;
    image[1][2] = 6;
    image[2][0] = 7;
    image[2][1] = 8;
    image[2][2] = 9;

    rotateImage(image, n);

    // Print the rotated image
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", image[i][j]);
        }
        printf("\n");
    }

    // Free memory
    for (int i = 0; i < n; i++) {
        free(image[i]);
    }
    free(image);

    return 0;
}

