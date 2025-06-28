def factorial(n):
    if n < 0:
        return "Invalid input"
    result = 1
    for i in range(2, n + 1):
        result *= i
    return result

print(factorial(5))  # Output: 120
