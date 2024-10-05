#include <stdio.h>

int main()
{
	int a, i, j;

	printf("Enter a number till which you need prime numbers: ");
	scanf("%d", &a);

	if (a < 2)
	{
	printf("No prime numbers.");
	return 0;
	} 
	else if (a == 2)
	{
	printf("2 ");
	return 0;    	}

	//Start from 3 and check for odd numbers only
	printf("2 "); //Printing the first prime number

	i = 3; //Start checking from 3

	while (i <= a) 
	{
	int j = 2; //Check for factors from 2

		//Check if i is prime
		while (j * j <= i) 
		{
			if (i % j == 0)
			{
				break; //Not a prime, go out of 2nd while loop
			}
		j++; //Check the next possible factor
		}

		//If no factors were found, i is prime
		if (j * j > i) 
		{
			printf("%d ", i); //Printing the prime number
		}

	i += 2;
	}

	printf("\n");

return 0;
}
