#include <stdio.h>

int main()
{
	int a;
	char c;
	printf("Enter your age: ");
	scanf("%d", &a);
	
	printf("Enter your citizenship ('P' or 'p' for Pakistan): ");
	scanf(" %c", &c);
	
	if (c == 'P' || c == 'p')
	{
		if ((a>=18))
		{
		printf("You are eligible to vote.");
		}
		else
		{
		printf("You are not eligible to vote.");
		}
	}
	else
	{
	printf("You are not eligible to vote.");
	}
return 0;
}
