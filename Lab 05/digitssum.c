#include <stdio.h>
#include <math.h>

int main()
{
	int sum = 0;
	int num;


	printf("enter num:");
	scanf("%d", &num);
	 
	while (num>0){
	sum += num%10;
	num /= 10;
	
}
	printf("sum is %d", sum);
return 0;
}