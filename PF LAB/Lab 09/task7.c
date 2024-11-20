#include <stdio.h>

void calculate(int a, int b, char op)
{
    if (op == '+')
    {
        printf("Result: %d\n", a + b);
    }
    else if (op == '-')
    {
        printf("Result: %d\n", a - b);
    }
    else if (op == '*')
    {
        printf("Result: %d\n", a * b);
    }
    else if (op == '/')
    {
        if (b != 0)
        {
            printf("Result: %.2f\n", (float)a / b);
        }
        else
        {
            printf("Division by zero is not allowed.\n");
        }
    }
    else
    {
        printf("Invalid operation.\n");
    }
}

int main()
{
    int num1, num2;
    char op;

    printf("Enter 1st number: ");
    scanf("%d", &num1);
    
    printf("Enter 2nd number: ");
    scanf("%d", &num2);

    printf("Enter an operation (+, -, *, /): ");
    scanf(" %c", &op);

    calculate(num1, num2, op);

    return 0;
}