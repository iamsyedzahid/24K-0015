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

    //Finding the maximum value to determine the number of rows
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

    //Printing stars vertically
    for (int j = max_value; j > 0; j--)
    {
        for (int i = 0; i < count; i++)
        {
            if (values[i] >= j)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");  
    }

    //Printing the count of stars below each column
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
