#include <stdio.h>
#include <string.h>

#define MAX_TRANSACTIONS 100
#define MAX_LENGTH 100

void sortString(char *str)
{
    int len = strlen(str);
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (str[i] > str[j])
            {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int main()
{
    char transactions[MAX_TRANSACTIONS][MAX_LENGTH], sorted[MAX_TRANSACTIONS][MAX_LENGTH];
    int n, i, j;

    printf("Enter the number of transactions: ");
    scanf("%d", &n);

    printf("Enter the transactions:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%s", transactions[i]);
        strcpy(sorted[i], transactions[i]);
        sortString(sorted[i]);
    }

    printf("\nGrouped Transactions:\n");
    for (i = 0; i < n; i++)
    {
        if (sorted[i][0] != '\0')
        {
            printf("[ %s", transactions[i]);
            for (j = i + 1; j < n; j++)
            {
                if (strcmp(sorted[i], sorted[j]) == 0)
                {
                    printf(", %s", transactions[j]);
                    sorted[j][0] = '\0';
                }
            }
            printf(" ]\n");
        }
    }

    return 0;
}
