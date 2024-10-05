#include <stdio.h>

int IsPrime(int num) 
{
	if (num < 2)
	{
		return 0; //Not prime
	}
	for (int i = 2; i * i <= num; i++)
	{
		if (num % i == 0)
		{
			return 0; //Not prime
		}
	}
	return 1; //Is Prime
}

int fibonacci(int j)
{
	int n1 = 0, n2 = 1, z;
	int k = 0;

	printf("Fibonacci series up to %d: ", j);
	
	while (n1 <= j) {
		printf("%d ", n1);
		
		z = n1 + n2;
		n1 = n2;
		n2 = z;
		k++;
	}
	printf("\n");
	return k;
}

int main()
{
	int num;

	printf("Enter a number: ");
	scanf("%d", &num);

	if (IsPrime(num))
	{
		printf("%d is a prime number.\n", num);
		fibonacci(num);
	}
	else
	{
		printf("%d is not a prime number.\n", num);
	}

return 0;
}
