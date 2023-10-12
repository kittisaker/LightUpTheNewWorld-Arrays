# Define a 2D list (array) with 3 rows and 4 columns
arr = [
    [1, 2, 3, 4],
    [5, 6, 7, 8],
    [9, 10, 11, 12]
]

# Access and print elements
for row in arr:
    for element in row:
        print(element, end=' ')
    print()