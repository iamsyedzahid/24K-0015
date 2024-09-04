#include <stdio.h>

int main()
{
	//variable datatype

	int distance = 1207;
	int price_forward = 118;
	int price_backward = 123;
	float totalFuel_cost;
	float fuel_used;
	float fuel_avg;
	
	//inputing car's fuel average
	
	printf("Enter car's fuel average: ");

	scanf("%f", &fuel_avg);
	
	//checking if user entered positive value for fuel average
	//calculating total fuel cost and fuel consumed

	if (fuel_avg > 0)
	{	

	fuel_used = ((2*distance)/fuel_avg);
	
	totalFuel_cost = fuel_used*(price_forward + price_backward);
		
	printf("Total Fuel Cost: %.2f\n", totalFuel_cost);
	
	printf("Total Fuel Consumed: %.2f", fuel_used);

	}

	else

	{

	//printing a message if user enters negative input

	printf("Please enter fuel average as a positive integer.");

	}
return 0;
}