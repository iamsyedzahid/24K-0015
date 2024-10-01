#include <stdio.h>

int main()
{
	int age;
	
	printf("Enter your age in years: ");
	scanf("%d",&age);
	
	if (age>0)
	{
		if (age<=12)
		{
		printf("You are a child.");
		} //end if
		else if ( (age>12) && (age<=19) )
		{
		printf("You are a teenager.");
		} //end if
		else if ( (age>19) && (age<=50) )
		{
		printf("You are a adult.");
		}
		else if ( (age>50) && (age<=200) )
		{
		printf("You are a senior.");
		}
		else 
		{
		printf("Age is too high.");
		}
	} //end if
	else
	{
	printf("Invalid age");
	} //end else
return 0;	
}
