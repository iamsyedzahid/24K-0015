#include <stdio.h>

int main()
{
	float cost;
	float saved;
	float after;
	float discount;
	
	printf("Enter the total cost of shopping.\n");
	scanf("%f", &cost);
	
	if (cost > 0)
	{
		if ( (cost >=500) && (cost < 2000) ) 
	
		{
			discount = 0.05;
			saved = discount * cost;
			after = (1 - discount) *cost;
			printf("Your actual amount was: %f\n", cost);
			printf("Your saved amount is: %f\n", saved);
			printf("Your amount after discount of 5 percent is: %f\n", after);
		}
	
		else if ( (cost >= 2000) && (cost < 4000) )
		
		{
			discount = 0.10;
			saved = discount * cost;
			after = (1 - discount) *cost;
			printf("Your actual amount was: %f\n", cost);
			printf("Your saved amount is: %f\n", saved);
			printf("Your amount after discount of 10 percent is: %f\n", after);	
		}
	
		else if ( (cost >= 4000) && (cost < 6000) )
		
		{
			discount = 0.20;
			saved = discount * cost;
			after = (1 - discount) *cost;
			printf("Your actual amount was: %f\n", cost);
			printf("Your saved amount is: %f\n", saved);
			printf("Your amount after discount of 20 percent is: %f\n", after);
		}
	
		else if ( (cost >= 6000) )
	
		{
			discount = 0.35;
			saved = discount * cost;
			after = (1 - discount) *cost;
			printf("Your actual amount was: %f\n", cost);
			printf("Your saved amount is: %f\n", saved);
			printf("Your amount after discount of 35 percent is: %f\n", after);
		}
	
		else
	
		{
			printf("No discount.\n");
		}
	}
	
	else
	
	{
		printf("Invalid amount.\n");
	}
return 0;
}
