#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
    const int m = 6, n = 5;

    char arr[m][n];
    
    char search[100];
    
    int score = 0;

    srand(time(NULL));

    while (1)
    {
        //Generating 2D array of random alphabets 
        for (int i = 0; i < m - 1; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                arr[i][j] = (char)(rand() % 26) + 'A';
            }
        }

        //Entering "0015" to last row and an additional random character
        arr[m - 1][0] = '0';
        arr[m - 1][1] = '0';
        arr[m - 1][2] = '1';
        arr[m - 1][3] = '5';
        arr[m - 1][4] = (char)(rand() % 26) + 'A';

        //Printing the array
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("|%c| ", arr[i][j]);
            }
            printf("\n");
        }

        //Searching
        while (1)
        {
            printf("Search Str= ");
            scanf("%s", search);

            if (strcmp(search, "END") == 0)
            {    
                //Repeating the process we did above to make new 2D random array
                for (int i = 0; i < m - 1; ++i)
                {
                    for (int j = 0; j < n; ++j)
                    {
                        arr[i][j] = (char)(rand() % 26) + 'A';
                    }
                }

                
                arr[m - 1][0] = '0';
                arr[m - 1][1] = '0';
                arr[m - 1][2] = '1';
                arr[m - 1][3] = '5';
                arr[m - 1][4] = (char)(rand() % 26) + 'A';

                for (int i = 0; i < m; i++)
                {
                    for (int j = 0; j < n; j++) {
                        printf("|%c| ", arr[i][j]);
                    }
                    printf("\n");
                }
                return 0;
            }//Exiting condition

            int strLength = strlen(search);
            int found = 0; //this is for confirming if string is found or not

            //Searching string horizontally
            for (int i = 0; i < m; ++i)
            {
                for (int j = 0; j <= n - strLength; ++j)
                {
                    int match = 1;
                    for (int k = 0; k < strLength; ++k)
                    {
                        if (arr[i][j + k] != search[k])
                        {
                            match = 0;
                            break;
                        }
                    }
                    if (match)
                    {
                        found = 1;
                        break;
                    }
                }
                if (found) break;
            }

            //Searching vertically when not found horizontally
            if (!found)
            {
                for (int j = 0; j < n; ++j)
                {
                    for (int i = 0; i <= m - strLength; ++i)
                    {
                        int match = 1;
                        for (int k = 0; k < strLength; ++k)
                        {
                            if (arr[i + k][j] != search[k])
                            {
                                match = 0;
                                break;
                            }
                        }
                        if (match)
                        {
                            found = 1;
                            break;
                        }
                    }
                    if (found) break;
                }
            }

            //Updating score based on searching result, +1 if found, or -1 if not found
            if (found)
            {
                score++;
                printf("%s is present Score %d\n", search, score);
            }
            else
            {
                score--;
                printf("%s is not present Score %d\n", search, score);
            }
        }
    }

    return 0;
}
