#include <stdio.h>

int main()
{
	int a;
	
	printf("Enter a number: ");
	scanf("%d", &a);
	
	(a==0)? printf("Number is zero.") : (a>0)? printf("Number is positive.") : printf("Number is negative.");
	
return 0;	
}
