#include <stdio.h>

int main()
{
	int n, sum;
	
	printf("Enter size of array: ");
	scanf("%d", &n);
	
	int z[n];
	
	for(int i=0;i<n;i++)
	{
		printf("Enter the value: ");
		scanf("%d", &z[i]);
	}


	for(int i=0;i<n;i++)
	{
		sum = z[i] + sum;
	}
		printf("Sum is: %d \n", sum);
  return 0;
}
