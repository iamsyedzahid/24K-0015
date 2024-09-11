#include <stdio.h>

int main() {

	char unit, conv_unit;
	float temp_value;
	float result;
	
	printf("Enter unit accordingly,\n C: Celsius to Fahrenheit OR Kelvin.\n F: Fahrenheit to Celsius OR Kelvin.\n K: Kelvin to Celsius OR Fahrenheit.\n");
	scanf(" %c", &unit);
	
	switch (unit) {

	case 'C': // Celsius to F or K
		printf("Enter unit to convert Celsius into,\n K or F:\n");
		scanf(" %c", &conv_unit);
		printf("Enter Temperature value in Celsius:\n");
		scanf("%f", &temp_value);
		
		if (conv_unit == 'K') {
			result = temp_value + 273.15;
			printf("Temperature in Kelvin is: %.2f\n", result); 
		}
		else if (conv_unit == 'F')
		{
			result = (temp_value * 9.0 / 5.0) + 32;
			printf("Temperature in Fahrenheit is: %.2f\n", result);
		}
		else
		{	
			printf("Invalid Input\n");
		}
		break;
	
	case 'F': // Fahrenheit to C or K
		printf("Enter unit to convert Fahrenheit into,\n K or C:\n");
		scanf(" %c", &conv_unit);
		printf("Enter Temperature value in Fahrenheit:\n");
		scanf("%f", &temp_value);

            	if (conv_unit == 'K')
		{
			result = (temp_value - 32) * 5.0 / 9.0 + 273.15;
			printf("Temperature in Kelvin is: %.2f\n", result); 
		} 
		else if (conv_unit == 'C')
		{
			result = (temp_value - 32) * 5.0 / 9.0;
			printf("Temperature in Celsius is: %.2f\n", result);
		} 
		else
		{
			printf("Invalid Input\n");
		}
		break;
	
	case 'K': // Kelvin to C or F
			printf("Enter unit to convert Kelvin into,\n F or C:\n");
			scanf(" %c", &conv_unit);
			printf("Enter Temperature value in Kelvin:\n");
			scanf("%f", &temp_value);
	
		if (conv_unit == 'F')
		{
			result = (temp_value - 273.15) * 9.0 / 5.0 + 32;
			printf("Temperature in Fahrenheit is: %.2f\n", result); 
		} 
			else if (conv_unit == 'C') 
		{
			result = temp_value - 273.15;
			printf("Temperature in Celsius is: %.2f\n", result);
		}
		else
		{
			printf("Invalid Input\n");
		}
		break;
	
	default:
			printf("Wrong unit entered\n");
	}

	printf("Thank you for using our AI-powered temperature converter.\n");
	
return 0;
}
