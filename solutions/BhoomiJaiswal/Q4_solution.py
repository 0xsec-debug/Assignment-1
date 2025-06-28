def is_palindrome(s):
    s = s.lower().replace(" ", "")  # Normalize the string
    return s == s[::-1]

# Test
text = "madam"
if is_palindrome(text):
    print(f'"{text}" is a palindrome.')
else:
    print(f'"{text}" is not a palindrome.')
