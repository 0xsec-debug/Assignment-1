#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* addBinary(char* a, char* b) {
    int lenA = strlen(a);
    int lenB = strlen(b);
    int maxLen = lenA > lenB ? lenA : lenB;

    
    char* result = (char*)malloc(maxLen + 2);
    result[maxLen + 1] = '\0';

    int i = lenA - 1;
    int j = lenB - 1;
    int k = maxLen;
    int carry = 0;

    while (i >= 0 || j >= 0 || carry > 0) {
        int sum = carry;
        if (i >= 0) sum += a[i--] - '0';
        if (j >= 0) sum += b[j--] - '0';

        result[k--] = (sum % 2) + '0';
        carry = sum / 2;
    }

   
    char* finalResult = result + k + 1;

  
    if (*finalResult == '\0') {
       
        finalResult = result + maxLen;
        finalResult[0] = '0';
        finalResult[1] = '\0';
    }

    return finalResult;
}
