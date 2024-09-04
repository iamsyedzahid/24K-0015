#include <stdio.h>

int main()
{
	//variable data type

	int no1;
	int no2;
	int swapper;

	//inputing values from user
	
	printf("Enter First number.");
	scanf("%d", &no1);
	
	printf("Enter Second number.");
	scanf("%d", &no2);
	
	//swapping the numbers
	swapper = no1;
	no1 = no2;
	no2 = swapper;

	//printing the numbers after swapping
	printf("First number after swapping is %d.\n", no1);
	printf("Second number after swapping is %d.\n", no2);
return 0;
}