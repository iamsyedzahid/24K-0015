#include <stdio.h>

int main()
{
	int a, i=2;
	
	printf("Enter a number till which you need prime numbers: ");
	scanf("%d", &a);
	
	printf("%d ", i);
	
	for (i=2;i<a;i++)
	{
		if ((i%2 == 0) || (i%3 == 0) || (i%5 == 0) || (i%6 == 0) || (i%7 == 0) || (i%8 == 0) || (i%9 == 0) )
		{
			continue;
		}
		else
		{
			printf("%d ", i);
		}
	}
return 0;
}
