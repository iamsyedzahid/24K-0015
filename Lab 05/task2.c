#include <stdio.h>

int main()
{
	float a;
	
	printf("Enter a number: ");
	scanf("%f", &a);
	
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
		if (a%0==0)
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
