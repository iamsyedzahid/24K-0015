#include <stdio.h>
int main()
{
	char inp; 
	int i, streak = 0;
	for (i=0;i<19999999999;i++)
	{
		printf("Have you sent the snap?\n");
		printf("Enter Y or y for YES \nAND\n N or n for NO\n");
		scanf(" %c", &inp);
		if (inp == 'Y' || inp == 'y')
		{
			printf("Your streak is %d days.\n", streak);
		}
		else if (inp == 'n' || inp == 'N')
		{
			printf("Your streak is broken, lasted %d days.\n", streak);
			break;
		}
		else
		{
			printf("Invalid Input.\n");
		}
		streak = streak + 1;
	}
	return 0;
}
