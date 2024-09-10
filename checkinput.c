#include <stdio.h>

int main()
{
	char a;

	printf("Enter any character: ");
	scanf("%c", &a);

	if (a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || 
	    a=='A' || a=='E' || a=='I' || a=='O' || a=='U')
	{
		printf("'%c' is Vowel.", a);
	}
	else if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
	{
        
		printf("'%c' is Consonant.", a);
	}
	else if (a>= '0' && a<= '9')
	{
		printf("'%c' is a number.", a);
	}
	else
	{	if ("a=='!' || a=='@' || a=='#' || a=='$' || a=='%' || a=='^' || a=='&' || a=='*' || a=='(' || a==')' a=='+'")
		printf("'%c' is a special character.", a);
	}

return 0;
}
