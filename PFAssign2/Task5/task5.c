#include <stdio.h>
#include <string.h>

int main()
{
    char word[30], result[30];
    int size, j = 0;

    printf("Enter word: ");
    scanf("%s", word);

    size = strlen(word);

    for (int i = 0; i < size; i++)
      {
        if (i == 0 || word[i] != word[i - 1])
        {
            result[j++] = word[i];
        }
    }
    
    result[j] = '\0';
    printf("Shortened word is: %s\n", result);
    
    return 0;
}
