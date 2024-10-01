#include <stdio.h>

int main()
{
	int a, b;
	
	printf("Enter 1st number: ");
	scanf("%d", &a);
	
	printf("Enter 2nd number: ");
	scanf("%d", &b);
	
	//swapping numbers using XOR
	
	a = a ^ b; 
    	b = a ^ b;
    	a = a ^ b;

	printf("After Swapping: a = %d, b = %d", a, b);

	return 0;
}
