#include <stdio.h>

int main()
{
	int customer_id;
	ch customer_name[] = "Name" ;
	int units;
	float result;
	float subcharges = 0.00;
	float charges_per_unit;
	float net_amount;
	
	printf("Enter your ID (4 digits, e.g 1001)\n :");
	scanf("%d", &customer_id);
	
	printf("Enter your Name.\n :");
	scanf("%s", &customer_name);

	printf("Enter number of units consumed.\n :");
	scanf("%d", &units);

	if ( (units >= 0) && (units <=199) )
	{
		charges_per_unit = 16.20;
		result = charges_per_unit * units;
	}
	else if ( (units >= 200) && (units <=299) )
	{
		charges_per_unit = 20.0;
		result = charges_per_unit * units;
	}
	else if ( (units >= 300) && (units <=499) )
	{
		charges_per_unit = 27.10;
		result = charges_per_unit * units;
	}
	else if ( units >= 500 )
	{
		charges_per_unit = 35.90;
		result = charges_per_unit * units;
	}
	else
	{
		printf("Units cannot be negative.\n");
	}
	if ( result > 18000 )
	{
		subcharges = 0.15 * result;
	}

	printf("Customer ID: %d\n", customer_id);
	printf("Customer Name: %d\n", customer_name);
	printf("Amount Charges @Rs. %f per unit: %f\n", charges_per_unit, result);
	printf("Customer ID: %d", subcahrges);
	printf("Customer ID: %d", net_amount);
	
return 0;
}
