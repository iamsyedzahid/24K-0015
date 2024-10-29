#include <stdio.h>

int main()
{
    int N;

    printf("Enter the number of matchsticks: ");
    scanf("%d", &N);

    if (N % 5 == 0)
    {
        printf("It's impossible for A to win.\n");
        return -1;
    }
    else
    {
        printf("A should pick %d matchstick(s) and keep leaving multiple of 5 for B to pick to guarantee a win.\n", N % 5);
        return N%5;
    }
}
