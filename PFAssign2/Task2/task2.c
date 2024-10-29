#include <stdio.h>

int main()
{
    char slogans[3][100] = {"buy now", "save big", "limited offer"};
    int count[256];

    for (int i = 0; i < 3; i++)
    {
        for (int k = 0; k < 256; k++)
        {
            count[k] = 0;
        }

        for (int j = 0; slogans[i][j] != '\0'; j++)
        {
            char currentChar = slogans[i][j];
            if (currentChar >= 0 && currentChar < 256)
            {
                count[currentChar]++;
            }
        }

        printf("Slogan %d: {", i + 1);
        for (int k = 0; k < 256; k++)
        {
            if (count[k] > 0)
            {
                printf("'%c': %d, ", k, count[k]);
            }
        }
        printf("\b\b}\n\n");
    }

    return 0;
}
