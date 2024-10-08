#include <stdio.h>

int main()
{
	int n, sum, j;
	
	printf("Enter size of array: ");
	scanf("%d", &n);
	
	int z[n];
	
	for(int i=0;i<n;i++)
	{
		printf("Enter the value: ");
		scanf("%d", &z[i]);
	}

	j = n-1;
	
	for(int i=0;j>=0,i<n;i++)
	{
		printf("%d ", z[j]);
		j--;
	}
return 0;
}
