def rotate_image(matrix):
    n = len(matrix)

    # Transpose the matrix
    for i in range(n):
        for j in range(i, n):
            matrix[i][j], matrix[j][i] = matrix[j][i], matrix[i][j]

    # Reverse each row
    for i in range(n):
        matrix[i] = matrix[i][::-1]

    return matrix

# Test the function
image = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]

rotated_image = rotate_image(image)
for row in rotated_image:
    print(row)
