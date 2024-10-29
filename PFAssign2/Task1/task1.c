#include <stdio.h>

int main()
{
	int arr[5];
	int min = 9999;
	int second_min = 9999;
	
	for (int i = 0; i < 5; i++)
    {
		printf("Enter Element %d: ", i + 1);
		scanf("%d", &arr[i]);

		if (arr[i] >= 9999  || arr[i] <= -9999)
        {
			printf("Invalid Input at index %d.\n", i);
			return 1;
		}
	}

	for (int i = 0; i < 5; i++)
    {
		if (arr[i] < min)
        {
			second_min = min;
			min = arr[i];
		}
        else if (arr[i] < second_min && arr[i] != min)
        {
			second_min = arr[i];
		}
	}

	if (second_min == 9999)
    {
		printf("There is no second smallest number.\n");
	}
    else
    {
		printf("Second smallest value in the array is %d.\n", second_min);
	}
	
	return 0;
}
