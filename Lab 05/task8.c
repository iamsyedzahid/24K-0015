#include <stdio.h>

int main()
{
	//declaring counting variables
	int zero = 0,ones = 0, num;
	printf("Enter a number: ");
	scanf("%d",&num);


	// checking all bits on binary level
	while (num > 0) {

	// if current bit is one
	if (num & 1 == 1) 
	{
		ones = ones + 1;
	}

	// If current bit is zero
	else 
	{
		zero = zero + 1;
	}

	num = num >> 1;
	}
	//printing number of 1s
	printf("one in a number are %d\n", ones);
return 0;
}
