#include <stdio.h>
int main()
{
/*
Write a program that checks if a year is a leap year using the modulus operator. 
*/

	int year;

	printf("Enter a Year: ");
	scanf("%d", &year);

	if (year > 0)
	{
		if (year % 400 == 0)
		{
			printf("\n");
			printf("'%d' is a Leap Year.", year);
		}
		else if ((year % 4 == 0) && (year % 100 !=0))
		{
			printf("\n");
			printf("'%d' is a Leap Year.", year);
		}
		else
		{
			printf("\n");
			printf("'%d' is not a Leap Year.", year);
		}
	}
	else
	{
		printf("Invalid Year.");
	}
	
	
return 0;
}