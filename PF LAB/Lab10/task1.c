#include <stdio.h>

int sum_of_digits(int n)
{
    if (n < 10) return n;
    return (n % 10) + sum_of_digits(n / 10);
}

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Sum of digits: %d\n", sum_of_digits(number));
    return 0;
}
