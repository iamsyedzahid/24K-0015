#include <stdio.h>

int main()
{
	/* Write a C program that simulates a simple menu-driven system for geometric
	calculations. The user can choose one of the following options:
	1. Calculate the area of a circle.
	2. Calculate the area of a rectangle.
	3. Calculate the area of a triangle.
	4. Exit.
	*/
	
	// circle
	float r;
	
	//rectangle
	float a, b;
	
	// triangle
	float base, h;
	float result;
	int menu;
	
	printf("Enter a number accordingly,\n (1: Area of circle)\n (2: Area of rectangle)\n (3: Area of triangle)\n (4: Exit)\n");
	scanf("%d", &menu);
	
	switch (menu)
	{
	case 1: 
		printf("Enter radius.\n");
		scanf("%f", &r);
		if (r>0)
		{
		result = (3.14159265358979323846)*r*r;
		printf("Area of circle is: %f", result);
		}
		else 
		{
		printf("Inavlid input");
		}
		break;
		
	case 2:
		printf("Enter length a.\n");
		scanf("%f", &a);
		printf("Enter length b.\n");
		scanf("%f", &b);
		
		if ((a>0) && (b>0))
		{
		result = a*b;
		printf("Area of rectangle is: %f", result);
		}
		else
		{
		printf("Inavlid input");
		}
		break;
	case 3:
		printf("Enter base area.\n");
		scanf("%f", &base);
		printf("Enter height.\n");
		scanf("%f", &h);
		
		if ((base>0) && (h>0))
		{  
		result = 0.5*base*h;
		printf("Area of triangle is: %f", result);
		}
		else
		{
		printf("Inavlid input");
		}
		break;
	case 4:
		printf("Exit");
		break;
	default:
		printf("Invalid input! Please enter a number between 1 and 4.\n");

	}


return 0;
}
