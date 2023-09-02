def countCarryOperations(num1, num2):
    carry = 0  # Initialize the carry to 0
    carryCount = 0  # Initialize the carry count to 0
    
    while num1 > 0 or num2 > 0:
        digit1 = num1 % 10  # Get the rightmost digit of num1
        digit2 = num2 % 10  # Get the rightmost digit of num2
        
        sumDigits = digit1 + digit2 + carry  # Calculate the sum of digits
        
        if sumDigits >= 10:
            carry = 1  # Set the carry to 1 if the sum is greater than or equal to 10
            carryCount += 1  # Increment the carry count
        else:
            carry = 0  # Set the carry to 0 if the sum is less than 10
        
        num1 //= 10  # Remove the rightmost digit from num1
        num2 //= 10  # Remove the rightmost digit from num2
    
    if carryCount == 0:
        return "No carry operation."
    elif carryCount == 1:
        return "1 carry operation."
    else:
        return str(carryCount) + " carry operations."

# Read input until "0 0" is encountered
while True:
    num1, num2 = map(int, input().split())
    if num1 == 0 and num2 == 0:
        break
    
    result = countCarryOperations(num1, num2)
    print(result)
