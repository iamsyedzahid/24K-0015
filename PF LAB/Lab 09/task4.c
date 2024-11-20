// https://www.w3schools.com/c/c_ref_ctype.php
/* 
Create a program that accepts a 2D array of strings (e.g., 5 words with a max length of 20characters each).
Determines if each word (row) is a palindrome.
Outputs “Palindrome” or “Not Palindrome” for each word. 
A palindrome is a word that reads the same forward and backward.
For example: "madam", "racecar", "level", "radar".
*/
#include <stdio.h>
#include <string.h>

#define MAX_WORDS 5
#define MAX_LENGTH 20

int main() {
    char words[MAX_WORDS][MAX_LENGTH + 1];
    int i, j, length, isPalindrome;

    printf("Enter %d words (max length %d each):\n", MAX_WORDS, MAX_LENGTH);
    for (i = 0; i < MAX_WORDS; i++) {
        scanf("%s", words[i]);
    }

    printf("\nResults:\n");
    for (i = 0; i < MAX_WORDS; i++) {
        length = strlen(words[i]);
        isPalindrome = 1;

        for (j = 0; j < length / 2; j++) {
            if (words[i][j] != words[i][length - 1 - j]) {
                isPalindrome = 0;
                break;
            }
        }

        if (isPalindrome) {
            printf("Word '%s' is a Palindrome\n", words[i]);
        } else {
            printf("Word '%s' is Not Palindrome\n", words[i]);
        }
    }

    return 0;
}
