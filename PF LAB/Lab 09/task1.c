// Write a C function that takes two numbers as input and returns their product.

#include <stdio.h>

int productOfTwoNum(int a, int b)
{
    int product = a * b;
    printf("Product is %d.", product);
}

int main()
{
    int x,y;
    printf("Enter the 1st number: ");
    scanf("%d", &x);
    printf("Enter the 2nd number: ");
    scanf("%d", &y);
    productOfTwoNum(x,y);
    return 0;
}
