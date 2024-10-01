#include <stdio.h>

int main()
{
	int i, n,x;
	printf("Enter a number: ");
	scanf("%d", &n);
	
	for (i=1; i<=12 ;i++)
	{
		x = i*n;
		printf("%d x %d = %d\n", n, i, x);
	}
return 0;
}
