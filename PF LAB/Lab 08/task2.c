#include <stdio.h>

int main()
{
	int start, end, num, i;

	printf("Enter the start of the range: ");
	scanf("%d", &start);
	printf("Enter the end of the range: ");
	scanf("%d", &end);

    if (start>end)
    {
        printf("Start should be lesser than End");
        return -1;
    }

	printf("Prime numbers between %d and %d are:\n", start, end);
    
	for (num = start; num <= end; num++)
	{
		if (num < 2) continue;

		for (i = 2; i * i <= num; i++)
		{
			if (num % i == 0)
			{
				break;
			}
		}
		if (i * i > num)
		{
			printf("%d ", num);
		}
	}

	printf("\n");
return 0;
}
