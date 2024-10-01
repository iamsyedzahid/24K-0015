#include <stdio.h>

int main()
{
	int i, n,x;
	printf("Enter a number: ");
	scanf("%d", &n);
	
	i=1;
	do
	{
		x = i*n;
		printf("%d x %d = %d\n", n, i, x);
		i++;
	}while(i<=12);z
	
return 0;
}
