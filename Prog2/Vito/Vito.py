def findMinimalDistance(relatives):
    relatives.sort()  # Sort the relatives' street numbers in ascending order
    
    median = relatives[len(relatives) // 2]  # Find the median street number
    
    totalDistance = sum(abs(rel - median) for rel in relatives)  # Calculate the sum of distances
    
    return totalDistance

# Read the number of test cases
numTestCases = int(input())

# Process each test case
for _ in range(numTestCases):
    # Read the number of relatives
    numRelatives = int(input())
    
    # Read the street numbers of relatives
    relatives = []
    for _ in range(numRelatives):
        relatives.append(int(input()))
    
    # Calculate and print the minimal sum of distances
    result = findMinimalDistance(relatives)
    print(result)
