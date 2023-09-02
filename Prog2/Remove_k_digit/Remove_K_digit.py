def remove_k_digits(num, k):
    stack = []

    # Iterate through each digit in the number
    for digit in num:
        # Remove digits from the stack that are greater than the current digit
        while stack and k > 0 and stack[-1] > digit:
            stack.pop()
            k -= 1

        # Add the current digit to the stack
        stack.append(digit)

    # Remove any remaining digits to meet the k digit removal requirement
    while k > 0:
        stack.pop()
        k -= 1

    # Construct the smallest possible integer from the stack
    smallest_num = ''.join(stack).lstrip('0')

    # Handle the case where the resulting number is empty
    if not smallest_num:
        return '0'
    else:
        return smallest_num

# Test the function
num = "1432219"
k = 3
smallest_integer = remove_k_digits(num, k)
print(smallest_integer)
