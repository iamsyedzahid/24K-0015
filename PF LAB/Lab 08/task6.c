#include <stdio.h>

int main()
{
    int m, n;
    int min_row;
    int i, j;
    
    printf("Enter the size of matrix (m): ");
    scanf("%d", &m);
    printf("Enter the size of matrix (n): ");
    scanf("%d", &n);
    int matrix[m][n];
    
    printf("Enter the elements of the m x n matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    int max = matrix[0][0];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 1; j < 3; j++)
        {
            if (max < matrix[i][j])
            {
                max = matrix[i][j];
            }
        }
    }

    printf("Maximum Value in the matrix is %d.\n", max);
    return 0;
}
