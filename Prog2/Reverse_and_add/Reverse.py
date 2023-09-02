def reverse_and_add(n):
    iterations = 0
    while True:
        reversed_n = int(str(n)[::-1])  # Reverse the digits of n
        n += reversed_n  # Add reversed_n to n
        iterations += 1
        if str(n) == str(n)[::-1]:  # Check if n is a palindrome
            return iterations, n

# Read the number of test cases
N = int(input())

# Process each test case
for _ in range(N):
    P = int(input())  # Read the number P
    iterations, palindrome = reverse_and_add(P)
    print(iterations, palindrome)
