#include <stdio.h>

int main()
{
	int a, b;
	
	printf("Enter 1st number: ");
	scanf("%d", &a);

	printf("Enter 2nd number: ");
	scanf("%d", &b);
	
	(a>b)?	printf("%d is greater.", a)	:	printf("%d is greater.", b);
	
return 0;
}
