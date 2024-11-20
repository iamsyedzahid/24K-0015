

#include <stdio.h>

void swapIntegers(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x, y;

    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    printf("Before swapping: x = %d, y = %d\n", x, y);
    swapIntegers(&x, &y);
    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}