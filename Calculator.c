#include <stdio.h>

int main()
{
	int num1;
	int num2;
	int result;
	char operator;

	printf("Enter a operator (+,-,/,%):\n");
	scanf("%c", &operator);
	
	printf("Enter a number:\n");
	scanf("%d",&num1);
	printf("Enter a number:\n");
	scanf("%d",&num2);
	
	switch(operator)
	{
	case '+':	
		result = num1 + num2;
		printf("result is %d", result);
		break;
		
	case '-':
		result = num1 - num2;
		printf("result is %d", result);
		break;

	case '*':
		result = num1 * num2;
		printf("result is %d", result);
		break;		

	case '/':
		result = num1 + num2;
		printf("result is %d", result);
		break;
			
	case '%':
		result = num1 + num2;
		printf("%d", result);
		break;		
		
}
return 0;
}
