#include <stdio.h>

int findLength(const char *str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

void reverseString(char *str) {
    char *start = str;
    char *end = str + findLength(str) - 1;
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

void concatenateStrings(char *str1, const char *str2) {
    while (*str1 != '\0') {
        str1++;
    }
    while (*str2 != '\0') {
        *str1 = *str2;
        str1++;
        str2++;
    }
    *str1 = '\0';
}

int main() {
    char str1[100], str2[50];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[findLength(str1) - 1] = '\0';

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[findLength(str2) - 1] = '\0';
  
    printf("\nLength of first string: %d\n", findLength(str1));

    reverseString(str1);
    printf("Reversed first string: %s\n", str1);
    
    concatenateStrings(str1, str2);
    printf("Concatenated string: %s\n", str1);

    return 0;
}
