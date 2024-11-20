#include <stdio.h>

int evenORodd(int a)
{
    if (a%2==0)
    {
        printf("Number is Even.");
    }
    else{
        printf("Number is Odd.");
    }
}

int main()
{
    int x;
    printf("Enter the number: ");
    scanf("%d", &x);
    evenORodd(x);
    return 0;
}
