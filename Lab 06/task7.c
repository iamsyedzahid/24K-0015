//For 3 digit armstrong number
#include <stdio.h>

int main()
{
	int n, x, sum = 0;
	printf("Enter a number: ");
	scanf("%d", &n);
	
	x = n;
	if (n>99 && n<1000)
	{
	while (n>0)
	{
		sum = sum + ((n%10)*(n%10)*(n%10));
		n = n/10;
	}
	
	if (sum == x)
		{
			printf("%d is a armstrong number.", x);
		}
	else
		{
			printf("%d is not a armstrong number.", x);
		}
	}
	else
	{
		printf("Invaid number.");
	}
return 0;
}

//For all armstrong numbers
/*#include <stdio.h>

int main()
{
	int n, x, sum = 0, digits = 0, temp, power, digit;

	printf("Enter a number: ");
	scanf("%d", &n);
	
	x = n;

	temp = n;
	while (temp > 0)
	{
		temp = temp / 10;
		digits++;
	}
	
	temp = x;
	
	while (temp > 0)
	{
		digit = temp % 10;
		power = 1;
		for (int i = 0; i < digits; i++)
		{
			power = power * digit;
		}
		sum = sum + power;
		temp = temp / 10;
	}
	
	if (sum == x)
	{
		printf("%d is an Armstrong number.\n", x);
	}
	else
	{
		printf("%d is not an Armstrong number.\n", x);
	}

return 0;
}
*/
