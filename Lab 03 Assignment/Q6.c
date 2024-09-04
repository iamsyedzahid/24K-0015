#include <stdio.h>

int main()
{
	//variable datatype
	
	int x1 = 5;
	int y1 = 4;
	int x2 = 3;
	int y2 = 2;
	float slope;

	//printing points of slope
	
	printf("Point A is (%d,", x1);
	printf("%d)\n", y1);
	printf("Point B is (%d,", x2);
	printf("%d)\n", y2);
	
	//calculating slope
	
	slope = ((y2-y1)/(x2-x1));

	//printing slope

	printf("Slope is %.3f.", slope);
return 0;
}