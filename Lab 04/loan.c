#include <stdio.h>

int main()
{
	int a, i, c;
	
	printf("Enter your age: ");
	scanf("%d",&a);
	
	printf("Enter your income: : ");
	scanf("%d",&i);
	
	printf("Enter your credit score: ");
	scanf("%d",&c);
	
	if ((a<0) || (i<0) || (c<0))
	{
	printf("Wrong input entered.");
	}
	else if ((a>=21) && (i>=50000) && (c>640))
	{
	printf("You are eligible for loan.");
	}
	else
	{
	printf("You are not eligible for loan.");
	}
return 0;
}


/*
#include <stdio.h>

int main()
{
	int a, i, c;
	
	printf("Enter your age: ");
	scanf("%d",&a);
	
	printf("Enter your income: : ");
	scanf("%d",&i);
	
	printf("Enter your credit score: ");
	scanf("%d",&c);
	
	if ((a<0) || (i<0) || (c<0))
	{
	printf("Wrong input entered.");
	}
	else if ((a>=21))
	{
		if (i>=50000)
		{
			if (c>=640)
			{
			printf("You are eligible for loan.");
			}
		}
	}
	else
	{
	printf("You are not eligible for loan.");
	}
return 0;
}
*/
