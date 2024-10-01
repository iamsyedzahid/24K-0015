#include <stdio.h>

int main()
{
	int a, b, sum;
	
	printf("Enter first number: ");
	scanf("%d", &a);
	
	printf("Enter second number: ");
	scanf("%d", &b);
	
	while(a<b)
	{
		if (a%2==0)
		{
			sum = sum + a;
			printf("Your sum of even no.s are: %d\n", sum);
		}
		a = a + 1;
	}
	
	
	
	
	
	return 0;
}
