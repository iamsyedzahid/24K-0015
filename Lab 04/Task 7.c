#include <stdio.h>

int main()
{
	int customer_id;
	char customer_name[100] = "name" ;
	int units;
	float result;
	float subcharges = 0.00;
	float charges_per_unit;
	float net_amount;
	
	printf("Enter your ID (4 digits, e.g 1001): ");
	scanf("%d", &customer_id);
	
	printf("Enter your Name: ");
	scanf("%s", &customer_name);

	printf("Enter number of units consumed: ");
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
		net_amount = result + subcharges;
	}
	
	printf("Customer ID: %d\n", customer_id);
	printf("Customer Name: %s\n", customer_name);
	printf("Amount Charges @Rs. %.2f per unit: %.2f\n", charges_per_unit, result);
	printf("Subcharge amount: %.2f\n", subcharges);
	printf("Net Amount Paid by the Customer: %.2f", net_amount);
	
return 0;
}
