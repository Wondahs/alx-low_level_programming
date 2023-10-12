#!/usr/bin/python3
largest_palindrome = 0

for num1 in range(100, 1000):
    for num2 in range(num1, 1000):
        product = num1 * num2
        if str(product) == str(product)[::-1]:  # Check if the product is a palindrome
            if product > largest_palindrome:
                largest_palindrome = product

# Save the result to a file
with open("102-result", "w") as f:
    f.write(str(largest_palindrome))
