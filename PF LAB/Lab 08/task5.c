#include <stdio.h>

int main()
{
    int matrix[3][3];

    printf("Enter the elements of the 3x3 matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    int found = 0;

    for (int i = 0; i < 3; i++)
    {
        int min_row = matrix[i][0], column_index = 0;
        for (int j = 1; j < 3; j++)
        {
            if (min_row > matrix[i][j])
            {
                min_row = matrix[i][j];
                column_index = j;
            }
        }

        int k;
        for (k = 0; k < 3; k++)
        {
            if (min_row < matrix[k][column_index])
            {
                break;
            }
        }
        
        if (k == 3) {
            printf("Value of Saddle Point: %d\n", min_row);
            found = 1;
        }
    }

    if (!found) {
        printf("No Saddle Point\n");
    }

return 0;
}
