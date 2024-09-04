#include <stdio.h>

int main()
{
	//variable datatype

	int tax_rate;
	int salary;
	int tax;

	//inputing tax rate and salary from user
	
	printf("Enter the current Tax Rate as a percentage: ");
	scanf("%d", &tax_rate);

	printf("Enter your salary: ");
	scanf("%d", &salary);

	//calculating tax and salary after paying the tax
	
	tax = (tax_rate*salary)/100;
	printf("Tax is %d.\n", tax);
	
	salary = salary - tax;
	printf("Salary after tax is %d.\n", salary);

return 0;
}