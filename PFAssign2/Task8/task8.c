#include <stdio.h>
#include <math.h>
#include <string.h>

int BinaryToDecimal(int number) 
{
    // Converts a binary number to its decimal equivalent.
    int temp, converted_num = 0, i = 0;

    while (number > 0) 
    {
        temp = number % 10;
        converted_num += temp * (int)pow(2, i);
        number = number / 10;
        i++;
    }
    printf("\nYour converted decimal number is %d.\n", converted_num);
    return converted_num;
}

void DecimalToBinary(int number)
{
    // Converts a decimal number to its binary equivalent.
    int converted_binary = 0, remainder, place = 1;

    while (number > 0)
    {
        remainder = number % 2;
        converted_binary += remainder * place;
        place *= 10;
        number /= 2;
    }
    printf("\nYour converted binary number is %d.\n", converted_binary);
}

void DecimalToHexadecimal(int number)
{
    // Converts a decimal number to its hexadecimal equivalent.
    printf("\nYour converted hexadecimal is %X.\n", number);
}

int HexadecimalToDecimal(char hexNumber[100])
{
    // Converts a hexadecimal number to its decimal equivalent.
    int converted_decimal = 0, temp;
    int size = strlen(hexNumber) - 1;

    for (int i = 0; hexNumber[i] != '\0'; i++)
    {
        if (hexNumber[i] >= '0' && hexNumber[i] <= '9')
        {
            temp = hexNumber[i] - '0';
        }
        else if (hexNumber[i] >= 'A' && hexNumber[i] <= 'F')
        {
            temp = hexNumber[i] - 'A' + 10;
        }
        else if (hexNumber[i] >= 'a' && hexNumber[i] <= 'f')
        {
            temp = hexNumber[i] - 'a' + 10;
        }
        else
        {
            printf("Invalid hexadecimal digit %c\n", hexNumber[i]);
            return -1;
        }
        converted_decimal += temp * (int)pow(16, size);
        size--;
    }
    printf("Your converted decimal number is %d.\n", converted_decimal);
    return converted_decimal;
}

void BinaryToHexadecimal(int number)
{
    // Converts a binary number to its hexadecimal equivalent.
    int decimal = BinaryToDecimal(number);
    DecimalToHexadecimal(decimal);
}

void HexadecimalToBinary(char hexNumber[100])
{
    // Converts a hexadecimal number to its binary equivalent.
    int decimal = HexadecimalToDecimal(hexNumber);
    DecimalToBinary(decimal);
}

int main()
{
    int num, choice;
    char hexnum[100];

    do {
        printf("\nConversion Menu:\n");
        printf("1. Binary to Decimal\n");
        printf("2. Decimal to Binary\n");
        printf("3. Decimal to Hexadecimal\n");
        printf("4. Hexadecimal to Decimal\n");
        printf("5. Binary to Hexadecimal\n");
        printf("6. Hexadecimal to Binary\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a binary number: ");
                scanf("%d", &num);
                BinaryToDecimal(num);
                break;

            case 2:
                printf("Enter a decimal number: ");
                scanf("%d", &num);
                DecimalToBinary(num);
                break;

            case 3:
                printf("Enter a decimal number: ");
                scanf("%d", &num);
                DecimalToHexadecimal(num);
                break;

            case 4:
                printf("Enter a hexadecimal number: ");
                scanf("%s", hexnum);
                HexadecimalToDecimal(hexnum);
                break;

            case 5:
                printf("Enter a binary number: ");
                scanf("%d", &num);
                BinaryToHexadecimal(num);
                break;

            case 6:
                printf("Enter a hexadecimal number: ");
                scanf("%s", hexnum);
                HexadecimalToBinary(hexnum);
                break;

            case 7:
                printf("Exitied the program.\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while (choice != 7);

    return 0;
}
