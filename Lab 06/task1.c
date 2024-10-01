#include <stdio.h>

int main()
{
	int n, sum = 0;
	
	while (n!=0)
	{
		printf("Enter a number: ");
		scanf("%d", &n);
		if (n!=0)
		{
			sum = sum + n;
			printf("Sum is: %d\n", sum);
		}
		else
		{
			break;
		}
	}
	printf("Your sum is: %d", sum);
	return 0;
}
