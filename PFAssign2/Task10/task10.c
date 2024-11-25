
#include <stdio.h>

int main()
{
    int n, outer_space, inner_space, i, j;
    int mid_space, max_star;
    int mid_space3;    
    printf("Enter a number (2 to 5 for better star): ");
    scanf("%d", &n);

    //Initialized space calculations
    outer_space = n + (n - 3);
    inner_space = 1;

    //Printing the top part of star
    for (i = 0; i <= outer_space; i++)
    {
        printf(" ");
    }
    printf("*\n");

    //Adjusting outer space for the next part
    outer_space--;

    //Printing the top V-shaped pattern
    for (i = 0; i < n - 2; i++)
    {
        for (j = 0; j <= outer_space; j++)
        {
            printf(" ");
        }
        printf("*");
        for (j = 0; j < inner_space; j++)
        {
            printf(" ");
        }
        printf("*\n");

        outer_space--;
        inner_space += 2;
    }

    //Printing the middle line of stars
    for (i = 0; i < n; i++)
    {
        printf("*");
    }
    for (i = 0; i < inner_space; i++)
    {
        printf(" ");
    }
    for (i = 0; i < n; i++)
    {
        printf("*");
    }
    printf("\n");

    //Initialized bottom part variables
    mid_space = (inner_space * 2) - 1; 
    max_star = n;

    int space = 1;
    //Printing the bottom part by dwcreasing mid_space
    for (i = 0; i < max_star - 1; i++)
    {
        //Printing spaces
        for (j = 0; j < space; j++)
        {
            printf(" ");
        }
        printf("*");

        //Printing inner spaces
        for (j = 0; j < mid_space; j++)
        {
            printf(" ");
        }
        printf("*\n");

        mid_space -= 2;
        space++;
    }

    //After the main loop, adjusting mid_space for the last part
    mid_space += 2;
    int mid_space2 = mid_space3 = mid_space / 2;
    mid_space = 1;

    space -= 2;
    //Printing the last part with a more complex structure
    for (i = 0; i < max_star - 1; i++)
    {
        //Printing spaces
        for (j = 0; j < space; j++)
        {
            printf(" ");
        }
        printf("*");

        //Printing inner spaces
        for (j = 0; j < mid_space2; j++)
        {
            printf(" ");
        }

        //Print second star only for rows before the last one
        if (i != max_star - 2)
        {
            printf("*");
        }

        //Handle the last row specifically
        if (i == max_star - 2)
        {
            mid_space += 2;
            for (j = 0; j < mid_space; j++)
            {
                printf(" ");
            }
            printf("*\n");
            break;
        }
        for (j = 0; j < mid_space; j++)
        {
            printf(" ");
        }
        printf("*");
        for (j = 0; j < mid_space3; j++)
        {
            printf(" ");
        }
        printf("*\n");

        mid_space += max_star - 1;
        space--;
        mid_space2--;
        mid_space3--;
    }

    return 0;
}
