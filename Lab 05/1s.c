#include <stdio.h>

int main()
{
	//declaring counting variables
	int zero = 0,ones = 0, num;
	printf("Enter a number: ");
	scanf("%d",&num);


	// Iterate through all the bits
	while (num > 0) {

		// If current bit is 1
		if (num & 1) 
		{
			ones++;
		}

		// If current bit is 0
		else 
		{
			zero = zero + 1;
		}

		num = num >> 1;
	}
	//print number of 1s
	printf("Count of 1s in number is %d\n", ones);
return 0;
}