#include <stdio.h>

int main()
{
	int a;
	
	printf("Enter a number: ");
	scanf("%d", &a);
	
	if (a==0) 
	{
		printf("Number is zero.");
	}
	else if (a<0) 
	{
		printf("Number is negative.");
	}
	 else if (a>0)
	{
		if (a%2==0)
		{
			printf("Number is even and positive.");
		}
		else 
		{
			printf("Number is odd and positive.");
		}
	}
	else 
	{
		 printf("invalid number");
	}
return 0;	
}
