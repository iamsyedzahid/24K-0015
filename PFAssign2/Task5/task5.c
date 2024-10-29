#include <stdio.h>

void printHorizontalHistogram(int values[], int count)
{
    printf("\n");
    printf("\n");
    printf("Horizontal Histogram:\n");
    for (int i = 0; i < count; i++)
    {
        printf("Value %d: ", i + 1);
        for (int j = 1; j <= values[i]; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void printVerticalHistogram(int values[], int count)
{
    int max_value = 0;

    // Find the maximum value to determine the number of rows
    for (int i = 0; i < count; i++)
    {
        if (values[i] > max_value)
        {
            max_value = values[i];
        }
    }

    printf("\n");
    printf("\n");
    printf("Vertical Histogram:\n");

    // Print stars vertically without using vertical tabs
    for (int row = max_value; row > 0; row--)
    {
        for (int i = 0; i < count; i++)
        {
            if (values[i] >= row)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");  // New line after each row for compatibility
    }

    // Print the count of stars below each column
    for (int i = 0; i < count; i++)
    {
        printf("%d ", values[i]);
    }
    printf("\n");
}

int main()
{
    int count;

    printf("Enter the number of values you will enter: ");
    scanf("%d", &count);

    int values[count];

    for (int i = 0; i < count; i++)
    {
        printf("Value %d: ", i + 1);
        scanf("%d", &values[i]);
    }

    printf("\n");
    printf("\n");
    printf("Answer:\n");
    
    printHorizontalHistogram(values, count);
    printVerticalHistogram(values, count);

    return 0;
}
