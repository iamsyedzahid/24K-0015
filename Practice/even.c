#include <stdio.h>

int main()
{
	int i, n;
	printf("Enter a number: ");
	scanf("%d", &n);
	
	for (i=1; i<=n ;i++)
	{
		if (i%2==0){
			printf("even num: %d\n", i);
		}
		else if (i%2!=0)
		{
			printf("odd num:  %d\n", i);
		}
		
	}
return 0;
}
