#include <stdio.h>

int main()
{
	//declaring counting variables
	int attendence, exam, assignment;
	
	printf("Enter attendence: ");
	scanf("%d", &attendence);
	
	printf("Enter exam score in percentage: ");
	scanf("%d", &exam);
	
	printf("Enter assignment marks in percentage: ");
	scanf("%d", &assignment);
	
	if ( ((attendence < 0) || (exam < 0) || (assignment < 0)) || ( (attendence > 100) || (exam > 100) || (assignment > 100)) )
	{
			printf("Invalid Percentage Entered.");
	}
	else
	{
			if ( (attendence >= 80) && (exam >= 86) && (assignment >= 86) )
			{
				printf("Your Grade is 4.0 GPA");
			}
			else if ( (attendence >= 70) && (exam >= 70) && (assignment >= 65) )
			{
				printf("Your Grade is 3.0 GPA");
			}
			else if ( (attendence >= 60) && (exam >= 60) && (assignment >= 55) )
			{
				printf("Your Grade is 2.5 GPA");
			}
			else if ( (attendence >= 50) && (exam >= 50) && (assignment >= 45) )
			{
				printf("Your Grade is 2.0 GPA");
			}
			else if ( (attendence < 50) && (exam < 50) && (assignment < 45) )
			{
				printf("Your Grade is less than 2.0 GPA, you have to repeat some courses.");
			}
	}

return 0;
}
