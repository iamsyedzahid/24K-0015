#include <stdio.h>

int main()
{
	//variable datatype
	
	float Principal;
	float Rate_of_Interest;
	float Time;
	float Simple_Interest;
	
	//inputing Prinicipal, Rate of Interest, and Time
	
	printf("Enter Prinicpal (BETWEEN 100 AND 1,000,000 Rs): ");

	scanf("%f", &Principal);
	
	printf("Enter Rate of Interest (BETWEEN 5 and 10 %): ");

	scanf("%f", &Rate_of_Interest);
	
	printf("Enter Time (BETWEEN 1 and 10 years): ");

	scanf("%f", &Time);
	
	//calculating Simple Interest
	
	Simple_Interest = (Principal*Rate_of_Interest*Time)/100;
	
	//printing simple interest

	printf("Simple Interest is Rs. %.2f.", Simple_Interest);

return 0;
}