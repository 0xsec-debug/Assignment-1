#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char* str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char tmp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = tmp;
    }
}

char* addStrings(char* num1, char* num2) {
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int maxLen = (len1 > len2 ? len1 : len2) + 2; 
    char* result = (char*)malloc(maxLen);
    int i = len1 - 1, j = len2 - 1, k = 0, carry = 0;

    while (i >= 0 || j >= 0 || carry) {
        int digit1 = (i >= 0) ? num1[i--] - '0' : 0;
        int digit2 = (j >= 0) ? num2[j--] - '0' : 0;
        int sum = digit1 + digit2 + carry;
        result[k++] = (sum % 10) + '0';
        carry = sum / 10;
    }

    result[k] = '\0';
    reverse(result);
    return result;
}

int main() {
    char num1[] = "456";
    char num2[] = "77";

    char* sum = addStrings(num1, num2);
    printf("Sum: %s\n", sum);

    free(sum);
    return 0;
}
