#include <stdio.h>

int main()
{
	int number, sum;
	
	printf("Enter a number (9 digits): ");
	scanf("%d", &number);
	
	if (number > 0)
	{
		sum = (number % 10) + (number / 10 % 10) + (number / 100 % 10) + (number / 1000 % 10) + (number / 10000 % 10)
			+ (number / 100000 % 10) + (number / 1000000 % 10) + (number / 10000000 % 10) + (number / 100000000 % 10);
	}
		printf("sum is: %d", sum);
return 0;
}
/*
Create a program that calculates the sum of digits of a number until the result is a single digit.
*/

/*int main()
{
	int num, sum = 0;
	
	printf("Enter a number: ");
	scanf("%d", &num);

	while (num>0)
	{
		last_digit = num%10;    //find out what last digit is
		sum = sum + last_digit; //add digit
		num = num / 10;         // remove last digit
	}
		printf("Sum of digits is: %d", sum);
return 0;
}
*/
