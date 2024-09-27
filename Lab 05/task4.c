#include <stdio.h>

int main()
{
	float a;
	
	printf("Enter a number: ");
	scanf("%f", &a);
	
	(a==0)? printf("Number is zero."): (a<0)? printf("Number is negative."): (a>0)? printf("Number is positive."): printf("invalid number");
return 0;	
}
