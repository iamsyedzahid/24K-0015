#include <stdio.h>

int main()
{
	int a, pin = 5678;
	int i = 1;
	
	while(i>0)
	{
		printf("Enter your pin: ");
		scanf("%d", &a);
		if (a == pin)
		{
			printf("You have entered the correct password.\n");
			break;
		}
		else if (a != pin)
		{
			if (i<3)
			{
				printf("Wrong pin entered.\n");
			}
			else if (i==3)
			{
				printf("Wrong pin entered, now you are blocked.\n");
				break;
			}
		}
		i = i + 1;
	}
	
	
	
	
	
	return 0;
}
