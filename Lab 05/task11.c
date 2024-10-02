#include <stdio.h>

int main()
{
	int a, b, c;
	printf("Enter first number: ");
	scanf("%d", &a);
	printf("Enter second number: ");
	scanf("%d", &b);
	printf("Enter third number: ");
	scanf("%d", &c);
	
	if (a>b && a>c)
	{ 
	printf("%d is greatest number.", a);
	}
	else if (b>a && b>c)
	{ 
	printf("%d is greatest number.", b);
	}
	else if (c>b && c>a)
	{ 
	printf("%d is greatest number.", c);
	}
	else if (a==b && a>c)
	{ 
	printf("%d is greatest.", a);
	}
	else if (a==c && a>c)
	{ 
	printf("%d is greatest.", a);
	}
	else if (c==b && c>a)
	{ 
	printf("%d is greatest.", c);
	}
return 0;
}	
	
	
