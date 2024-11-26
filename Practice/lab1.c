#include <stdio.h>
int main()
{
	int size;
	printf("Enter size: ");
	scanf("%d", &size);
	int i,j;
	
	int arr1[size][size];
	int arr2[size][size];
	int arr3[size][size];
	
	printf("Enter elements of second matrix A:\n");
	for (i=0;i<size;i++)
	{
		for (j=0; j<size; j++)
		{
			printf("Enter Element in %d row and %d column: ", i, j);
			scanf("%d", &arr1[i][j]);
		}
	}	
	
	printf("Enter elements of second matrix B:\n");
	for (i=0;i<size;i++)
	{
		for (j=0; j<size; j++)
		{
			printf("Enter Element in %d row and %d column: ", i, j);
			scanf("%d", &arr2[i][j]);
		}
	}	
    // Adding the two matrices
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    // Print the resulting matrix
    printf("Resulting Matrix C (A + B):\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }

    return 0;
}

