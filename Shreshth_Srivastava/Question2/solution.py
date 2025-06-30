def fib(n):
    if n == 0:
        return 0
    elif n == 1:
        return 1

    a, b = 0, 1 
    for _ in range(2, n + 1):
        a, b = b, a + b  

    return b


if __name__ == "__main__":
    n = int(input("Enter n (0 <= n <= 30): "))
    
    if 0 <= n <= 30:
        result = fib(n)
        print(f"F({n}) = {result}")
    else:
        print("Invalid input. n must be between 0 and 30.")
