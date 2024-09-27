#include <stdio.h>

int main()
{
	int a;
	
	printf("Enter a number: ");
	scanf("%d", &a);
	
	if ((a%3==0) && (a%5==0))
	{
	printf("%d is divisible by both three and five.", a);
	}
	else
	{
	printf("%d is not divisible by both three and five.", a);
	}
return 0;
}
